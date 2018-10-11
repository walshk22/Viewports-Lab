class Shader {
private:
	unsigned int rendererID;
	std::string filePath;
public:
	Shader(const std::string& filepath);
	~Shader();
	void Bind() const;
	void unbind() const;

	//Set Uniforms#
	void SetUniform4f(const std::string& name, vec4(float x, float y, float z, float a));
private:
	unsigned int GetUniformLocation(const std::string& name);

};

