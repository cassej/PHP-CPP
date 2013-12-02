/**
<<<<<<< HEAD
 * 	Exception.h
 * 	Implementation of Php Exceptions.
 * 
 * 	@author Jasper van Eck <jasper.vaneck@copernica.com>
 * 	@copyright 2013 Copernica BV
 */
#include <exception>

/**
 *  Set up namespace
 */
namespace Php {

/** 
 *  Class definition
 */
class Exception : public std::exception
{
private:
	/**
	 * 	The exception message
	 * 	@var	char*
	 */
	std::string _message;
	
	/**
	 * 	The PHP exception code
	 * 	@var	int
	 */
	int _code;
	
public:
	/**
	 * 	Constructor
	 * 	@param	&string
	 */
	Exception(const std::string &message, int code = 0) : std::exception(), _message(message), _code(code)
	{
	}
	
	/**
	 *  Destructor
	 */
	virtual ~Exception()
	{
	}
	
	/**
	 * 	Returns the message of the exception.
	 * 	@return &string
	 */
	std::string &message() throw()
	{
		return _message;
	}
};

/**
 *  End of namespace
 */
}

 
=======
 *  exception.h
 *
 *  Represents an exception that can be thrown from C++, but also represents exceptions that
 *  can be thrown from PHP, it's the PHP-CPP exception base class.
 *
 *  @author Swen Kooij (Photonios) <photonios@outlook.com>
 *  @copyright 2013 Swen Kooij (Photonios)
 */

/**
 * Forward declarations for unknown types.
 */
namespace std
{
	class exception;
}

namespace Php
{

/**
 * Forward declarations for unknown types.
 */
class Base;

/**
 * Represents an exception, which can be thrown from C++ or PHP. The base class for PHP-CPP exceptions.
 * @author Swen Kooij
 */
class Exception : public Base, public std::exception
{
public:
	/**
	 * Empty constructor, initializes with an empty message.
	 */
	Exception();

	/**
	 * Initializes a new instance of the Exception class with the specified message.
	 * @param message The message that describes the reason the exception was thrown.
	 */
	Exception(const std::string &message);

	/**
	 *  The PHP constructor.
	 *  @param message The message that describes the reason the exception was thrown
	 */
	void __construct(Php::Parameters &params);

	/**
	 * Gets the exception message, describes the reason/cause of the exception.
	 * @note Overriding this method's return value, also overrides the return
	 * value of getMessage().
	 * @returns the exception message, describes the reason/cause of the exception.
	 */
	virtual std::string GetMessage();

	/**
	 * Implements std::exception's virtual method, returns the exception description.
	 */
	virtual const char* what() const noexcept;

	/**
	 * Gets the name as which this class is exported to php.
	 * @return The name as which this class is exported to php.
	 */
	virtual std::string GetExportName();

protected:
	/**
	 * Holds the exception message.
	 */
	std::string 	m_message;
};
} // namespace Php
>>>>>>> photo/master
