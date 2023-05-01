#pragma once

#include <cstdint>
#include <vector>

using GrayscaleMatrix = std::vector<std::vector<uint8_t>>;

class Image
{
    private:
    std::uint32_t m_width;
    std::uint32_t m_height;
    GrayscaleMatrix m_matrix;

    public:
    // Constructor
    Image(const std::uint32_t width, const std::uint32_t height);
    // Destructor
    ~Image();
    // Methods
    void save_image(const char *file_name) const;
    void set_pixel(const std::uint32_t x, const std::uint32_t y, const::uint8_t value);
    // Getter-Methods
    std::uint32_t get_width() const;
    std::uint32_t get_height() const;
    GrayscaleMatrix &get_matrix();

    // Setter-Methods

};
