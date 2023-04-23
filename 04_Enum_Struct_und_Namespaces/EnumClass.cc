#include <iostream>

// enum: enumeration
enum class PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

enum class ServerGroup
{
    ADMIN,
    USER
};

struct UserData
{
    std::string name;
    std::uint32_t id;
    PermissionLevel permissionLevel;
};

void print_user(UserData &user)
{
    std::cout << user.name << " has the id " << user.id << " and is a ";

    switch (user.permissionLevel)
    {
        case PermissionLevel::STUDENT:
            std::cout << "STUDENT!\n";
            break;
        case PermissionLevel::TUTOR:
            std::cout << "TUTOR!\n";
            break;
        case PermissionLevel::INSTRUCTOR:
            std::cout << "INSTRUCTOR!\n";
            break;
        case PermissionLevel::ADMIN:
            std::cout << "ADMIN!\n";
            break;
        default:
            std::cout << "UNKNOWN STATE!\n";
    }
}

int main()
{
    UserData jan {"Jan", 10801328, PermissionLevel::INSTRUCTOR};
    UserData peter {"Peter", 10801327, PermissionLevel::STUDENT};
    UserData eva;

    eva.name = "Eva";
    eva.id = 10801329;
    eva.permissionLevel = PermissionLevel::ADMIN;

    print_user(jan);
    print_user(peter);
    print_user(eva);

    return 0;
}
