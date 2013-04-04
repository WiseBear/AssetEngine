#pragma once

#include <GL/freeglut.h>
#include <GL/glext.h>
#include "Texture.h"
#include "Terrain.h"
#include "Mesh.h"

class OpenGLFunctions
{
public:
	OpenGLFunctions();
	~OpenGLFunctions(void);

	GLuint LoadTexture(Texture* tex);

	void RenderTerrain(Terrain* ter);

	void RenderMesh(Mesh* mesh);
private:

};

