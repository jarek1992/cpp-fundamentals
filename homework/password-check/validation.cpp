#include "validation.hpp"
#include <cctype>

std::string getErrorMessage(ErrorCode code)
{
    switch (code) {
    case ErrorCode::Ok: {
        return "Ok";
    }
    case ErrorCode::PasswordNeedsAtLeastNineCharacters: {
        return "Password needs to have at least nine characters";
    }
    case ErrorCode::PasswordNeedsAtLeastOneNumber: {
        return "Password needs to have at least one number";
    }
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: {
        return "Password needs to have at least one special character";
    }
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: {
        return "Password needs to have at least one uppercase letter";
    }
    case ErrorCode::PasswordsDoNotMatch: {
        return "Passwords do not match";
    }
    default: {
        return "Unknown error";
    }
    }
    return "Unknow error";
}

bool doPasswordsMatch(std::string password1, std::string password2)
{
    return password1 == password2;
}

ErrorCode checkPasswordRules(std::string password)
{
    int uppercase = 0;
    int number = 0;
    int special = 0;

    for (auto character : password) {
        if (std::isupper(character)) {
            ++uppercase;
        }
        if (std::isdigit(character)) {
            ++number;
        }
        if (std::ispunct(character)) {
            ++special;
        }
    }

    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (number == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (special == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (uppercase == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password1, std::string password2)
{
    if (doPasswordsMatch(password1, password2)) {
        return checkPasswordRules(password1);
    }
    return ErrorCode::PasswordsDoNotMatch;
}
