#include <iostream>

#include <iostream>

namespace AD
{
    enum class Lane : char
    {
        RIGHT_LANE,
        CENTER_LANE,
        LEFT_LANE
    };

    struct Vehicle
    {
        int id;
        float velocity;
        Lane lane;
    };

    void print_vehicle_data(const Vehicle &vehicle)
    {
        std::string lane;

        std::cout << "Vehicle ID: " << vehicle.id << std::endl;
        std::cout << "Vehicle Velocity [kph]: " << vehicle.velocity << std::endl;

        switch(vehicle.lane)
        {
            case Lane::LEFT_LANE:
            {
                lane = "Left Lane";
                break;
            }
            case Lane::CENTER_LANE:
            {
                lane = "Center Lane";
                break;
            }
            case Lane::RIGHT_LANE:
            {
                lane = "Right Lane";
                break;
            }
            default:
            {
                break;
            }
        }

        std::cout << "Vehicle Lane Association: " << lane << std::endl;
    }

    void print_vehicle_data_pointer(const Vehicle *vehicle)
    {
        std::string lane;

        std::cout << "Vehicle ID: " << vehicle->id << std::endl;
        std::cout << "Vehicle Velocity [kph]: " << vehicle->velocity << std::endl;

        switch(vehicle->lane)
        {
            case Lane::LEFT_LANE:
            {
                lane = "Left Lane";
                break;
            }
            case Lane::CENTER_LANE:
            {
                lane = "Center Lane";
                break;
            }
            case Lane::RIGHT_LANE:
            {
                lane = "Right Lane";
                break;
            }
            default:
            {
                break;
            }
        }

        std::cout << "Vehicle Lane Association: " << lane << std::endl;
    }
}

int main()
{
    const auto v1 = AD::Vehicle{.id = 1, .velocity = 100.f, .lane = AD::Lane::CENTER_LANE};
    AD::print_vehicle_data(v1);

    std::cout << std::endl;

    AD::print_vehicle_data_pointer(&v1);

    return 0;
}
