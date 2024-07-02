#pragma once

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {

public:

	unsigned int id;

	Shader(const char* vertexPath, const char* fragmentPath);

};