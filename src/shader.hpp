#pragma once

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {

private:
	void checkCompileErrors(unsigned int shader, std::string type);

public:

	unsigned int id;

	Shader(const char* vertexPath, const char* fragmentPath);

	void use();
	void setBool(const std::string& name, bool value);
	void setInt(const std::string& name, int value);
	void setFloat(const std::string& name, float value);

};