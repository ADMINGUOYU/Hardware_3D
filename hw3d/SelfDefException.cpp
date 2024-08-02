#include "SelfDefException.h"
#include <sstream>

SelfDefException::SelfDefException(int line, const char* file) noexcept
	:
	line(line),
	file(file)
{}

const char* SelfDefException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* SelfDefException::GetType() const noexcept
{
	return "SelfDefException: Known ERROR";
}

int SelfDefException::GetLine() const noexcept
{
	return line;
}

const std::string& SelfDefException::GetFile() const noexcept
{
	return file;
}

std::string SelfDefException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl
		<< "[Line] " << line;
	return oss.str();
}