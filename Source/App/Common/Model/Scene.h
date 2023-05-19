#pragma once

#include <filesystem>
#include "Model.h"
#include "OpenGL/Shader.h"
class Scene
{
public:
    void Load(const std::filesystem::path& Path);
    std::vector<Entity> Entities;
    void Render(ShaderProgram& shaderProgram);
};
