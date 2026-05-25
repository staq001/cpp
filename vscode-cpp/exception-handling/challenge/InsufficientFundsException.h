#ifndef _INSUFFICIENT_FUNDS_EXCEPTION_H_
#define _INSUFFICIENT_FUNDS_EXCEPTION_H_

#include <stdexcept>

class InsufficientFundsException : public std::exception
{
public:
  InsufficientFundsException() noexcept = default;

  virtual const char *what() const noexcept override
    {
      return "Insufficient funds: balance is not enough for the requested withdrawal";
    }

    ~InsufficientFundsException() = default;
  };

#endif // _INSUFFICIENT_FUNDS_EXCEPTION_H_