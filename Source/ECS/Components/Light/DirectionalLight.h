#pragma once

#include <glm/glm.hpp>
#include <glm/gtx/rotate_vector.hpp>


struct DirectionalLight
{
	glm::vec3 Position;
	glm::vec3 Color;
	glm::vec3 Angle;
	glm::vec3 Direction;
    //LightDirectional::LightDirectional(glm::vec3 position, glm::vec3 angle, glm::vec3 color)
    //{
    //    mTransform.Position = position;
    //    Position = position;
    //    Angle = angle;
    //    Color = color;
    //    Direction = glm::vec3(0.0f, 0.0f, 1.0f);
    //    LightDirectional::Update();
    //}
    //
    //void LightDirectional::Update()
    //{
    //    Direction = glm::vec3(0.0f, 0.0f, 1.0f);
    //    Direction = glm::rotateX(Direction, Angle.x);
    //    Direction = glm::rotateY(Direction, Angle.y);
    //    Direction = glm::rotateZ(Direction, Angle.z);
    //    Direction = -glm::normalize(Direction);
    //}
};
