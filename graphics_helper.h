#include <GLTools.h>
#include <GLShaderManager.h>
#include <GLFrustum.h>
#include <GLBatch.h>
#include <GLMatrixStack.h>
#include <GLGeometryTransform.h>
#include <StopWatch.h>
#define FREEGLUT_STATIC
#include <GL/glut.h>

#include <cmath>

void RenderScene(void);
void SpecialKeys(int key, int x, int y);
void ChangeSize(int nWidth, int nHeight);
void setupGlut(int count, char *values[]);
void SetupRC();