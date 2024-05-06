#include "CreditCard.h"

CreditCard::CreditCard(const string& n, int a, long cn) : customer(n, a), cardNumber(cn) {}

CreditCard::~CreditCard() {}

Customer CreditCard::getCustomer() const {
    return customer;
}

long CreditCard::getCardNumber() const {
    return cardNumber;
}