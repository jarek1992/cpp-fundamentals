#include "validation.hpp"
#include <cctype>

std::string getErrorMessage(ErrorCode code) {
	switch(code) {
	case ErrorCode::Ok: {
		return "Ok";
	}
	case ErrorCode::PasswordNeedsAtLeastNineCharacters: {
                return "Password needs at least nine characters";
        }
	case ErrorCode::PasswordNeedsAtLeastOneNumber: {
                return "Password needs at least one number";
        }
	case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: {
                return "Password needs at least one special character";
        }
	case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: {
                return "Password needs at least one uppercase letter";
        }
	case ErrorCode::PasswordsDoNotMatch: {
                return "Passwords do not match";
        }
	default: {
		return "Out of range";
	}
	}
	return "Out of range";
}

bool doPasswordMatch(std::string password1, std::string password2) {
	if(password1 == password2) {
		return true;
	}
	return false;
}


