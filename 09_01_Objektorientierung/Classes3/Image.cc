#include "Image.h"
#include <iostream>

Image::Image(const std::uint32_t width, const std::uint32_t height) : m_width(width), m_height(height), m_matrix(m_width, std::vector<std::uint8_t>(m_height, 0))
{
    std::cout << "Image object created with shape=(" << width << "," << height
              << ")!\n";
}

Image::~Image()
{
    std::cout << "Image object destroyed!\n";
}

void Image::save_image(const char *file_name) const
{
    const auto COUNT_RGB = std::uint32_t {3};
    FILE *f = nullptr;

    auto num_bytes = COUNT_RGB * m_width * m_height;
    auto *img = new u_char[num_bytes]{};

    auto filesize = 54 + COUNT_RGB * m_width * m_height;

    for (std::uint32_t x = 0; x < m_width; ++x)
    {
        for (std::uint32_t y = 0; y < m_height; y++)
        {
            for (std::size_t i = COUNT_RGB - 1; i >= 0; i--)
            {
                img[(x + y * m_width) * COUNT_RGB + i] = m_matrix[x][y] % 256;
            }
        }
    }

    u_char bmpfileheader[14]{'B', 'M', 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0};
    u_char bmpinfoheader[40]{40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 24, 0};
    u_char bmppad[3]{0, 0, 0};

    bmpfileheader[2] = static_cast<u_char>(filesize);
    bmpfileheader[3] = static_cast<u_char>(filesize >> 8);
    bmpfileheader[4] = static_cast<u_char>(filesize >> 16);
    bmpfileheader[5] = static_cast<u_char>(filesize >> 24);

    bmpinfoheader[4] = static_cast<u_char>(m_width);
    bmpinfoheader[5] = static_cast<u_char>(m_width >> 8);
    bmpinfoheader[6] = static_cast<u_char>(m_width >> 16);
    bmpinfoheader[7] = static_cast<u_char>(m_width >> 24);
    bmpinfoheader[8] = static_cast<u_char>(m_height);
    bmpinfoheader[9] = static_cast<u_char>(m_height >> 8);
    bmpinfoheader[10] = static_cast<u_char>(m_height >> 16);
    bmpinfoheader[11] = static_cast<u_char>(m_height >> 24);

    f = fopen(file_name, "wb");
    if (f == nullptr)
    {
        delete[] img;
        img = nullptr;

        return;
    }

    fwrite(bmpfileheader, 1, 14, f);
    fwrite(bmpinfoheader, 1, 40, f);

    for (std::uint32_t i = 0; i < m_height; i++)
    {
        fwrite(img + (m_width * (m_height - i - 1) * 3), 3, m_width, f);
        fwrite(bmppad, 1, (4 - (m_width * 3) % 4) %4, f);
    }

    fclose(f);
    f = nullptr;

    delete[] img;
    img = nullptr;
}
