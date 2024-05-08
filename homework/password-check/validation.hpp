#pragma once
#include <iostream>
#include <string>

enum class ErrorCode 
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(std::string password1, std::string password2);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password1, std::string password2);

