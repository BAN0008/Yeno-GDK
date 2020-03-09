#pragma once
#include <glm/glm.hpp>

namespace Yeno
{
	namespace Camera
	{
		void UpdateMatrix();
		void SetPosition(glm::vec2 position);
		void SetRotation(float radians);
		void SetScale(glm::vec2 scale);
	}
}