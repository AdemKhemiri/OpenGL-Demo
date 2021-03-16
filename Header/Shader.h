//
// Created by adam79 on 3/16/21.
//

#ifndef OPENGL_DEMO_SHADER_H
#define OPENGL_DEMO_SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
    // the Program ID
    unsigned int ID;

    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader();
    void use();
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;


};


#endif //OPENGL_DEMO_SHADER_H
