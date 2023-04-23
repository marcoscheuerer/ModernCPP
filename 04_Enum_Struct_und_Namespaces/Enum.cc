#include <iostream>

// enum: enumeration
enum PermissionLevel
{
    STUDENT,
    TUTOR,
    INSTRUCTOR,
    ADMIN
};

int main()
{
    PermissionLevel permission_jan = INSTRUCTOR;
    PermissionLevel permission_peter = STUDENT;

    switch (permission_jan)
    {
        case PermissionLevel::STUDENT:
            std::cout << "Hello STUDENT!\n";
            break;
        case PermissionLevel::TUTOR:
            std::cout << "Hello TUTOR!\n";
            break;
        case PermissionLevel::INSTRUCTOR:
            std::cout << "Hello INSTRUCTOR!\n";
            break;
        case PermissionLevel::ADMIN:
            std::cout << "Hello ADMIN!\n";
            break;
        default:
            std::cout << "UNKNOWN STATE!\n";
    }

    return 0;
}
