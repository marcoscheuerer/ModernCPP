#include <iostream>

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

void print_vehicle_data(Vehicle &vehicle)
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
    }

    std::cout << "Vehicle Lane Association: " << lane << std::endl;
}

int main()
{
    Vehicle v1 = { 1, 100.0, Lane::CENTER_LANE };

    print_vehicle_data(v1);

    return 0;
}
