#include "Shader.h"
#include <string>
Shader::Shader(string& filepath)
{
	filePath = filepath;
	rendererID = 0;
	CompileShader();

}

Shader ::~Shader()
{
	Delete
}