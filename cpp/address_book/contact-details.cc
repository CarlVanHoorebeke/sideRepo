#include "contact-details.hh"

ContactDetails::ContactDetails(const std::string& telephone_number,
                               const std::string& personal_email)
{
    if (telephone_number.find_first_not_of("0123456789") != std::string::npos)
        throw std::invalid_argument("Incorrect number");
    else if (personal_email.find_first_of("@") == std::string::npos)
        throw std::invalid_argument("Incorrect email");
    else
    {
        number = telephone_number;
        email = personal_email;
    }
}

std::ostream& operator<<(std::ostream& os, const ContactDetails& contact)
{
    return os << contact.number << ", " << contact.email << "\n";
}
