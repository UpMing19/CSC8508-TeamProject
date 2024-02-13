#pragma once
#include "OGLRenderer.h"
#include "OGLShader.h"
#include "OGLTexture.h"
#include "OGLMesh.h"
#include "Light.h"

#include "GameWorld.h"

namespace NCL {
	class Maths::Vector3;
	class Maths::Vector4;
	namespace CSC8503 {
		class RenderObject;

		class GameTechRenderer : public OGLRenderer	{
		public:
			GameTechRenderer(GameWorld& world);
			~GameTechRenderer();

			Mesh*		LoadMesh(const std::string& name);
			OBJMesh*    LoadOBJMesh(const std::string& name);
			Texture*	LoadTexture(const std::string& name);
			Shader*		LoadShader(const std::string& vertex, const std::string& fragment);

		protected:
			void NewRenderLines();
			void NewRenderText();

			void RenderFrame()	override;

			OGLShader*	defaultShader;

			GameWorld&	gameWorld;

			void InitBuffers();
			void ClearAllBuffers();

			void GenerateShadowTexture();
			void GenerateCombinedTexture();
			void GenerateScreenTexture(GLuint& into, bool depth = false);

			void BuildObjectList();
			void SortObjectList();
			void RenderShadowMap();
			void RenderCamera();
			void RenderSkybox();
			void DrawLightBuffer();

			void SetShaderLight(const Light& l);
			void DrawPointLights();

			void CombineBuffers();

			void LoadSkybox();

			void SetDebugStringBufferSizes(size_t newVertCount);
			void SetDebugLineBufferSizes(size_t newVertCount);

			void Draw(Mesh* mesh, bool multilayer = true);

			vector<const RenderObject*> activeObjects;

			GLuint worldFBO;
			GLuint worldColourTex; 
			GLuint worldNormalTex; 
			GLuint worldSpecTex; 
			GLuint worldEmisTex; 
			GLuint worldDepthTex; 
			GLuint worldShadowTex;

			GLuint lightFBO;
			GLuint lightDiffuseTex; 
			GLuint lightSpecularTex;

			GLuint combinedFBO;
			GLuint combinedTex;

			GLuint processFBO;
			GLuint processTex;

			OGLShader*  debugShader;
			OGLShader*  skyboxShader;
			OGLMesh*	skyboxMesh;
			GLuint		skyboxTex;
			GLuint		skyboxBufferTex;
			GLuint      skyboxFBO;

			//shadow mapping things
			OGLShader*	shadowShader;
			GLuint		shadowTex;
			GLuint		shadowFBO;
			Matrix4     shadowMatrix;

			Light*      sunLight;
			Light*      redstoneLight1;
			Light*      redstoneLight2;
			Light*      redstoneLight3;

			OGLShader*  pointLightShader;
			Mesh*       sphere;
			Mesh*       quad;

			OGLShader*  combineShader;

			//Debug data storage things
			vector<Vector3> debugLineData;

			vector<Vector3> debugTextPos;
			vector<Vector4> debugTextColours;
			vector<Vector2> debugTextUVs;

			GLuint lineVAO;
			GLuint lineVertVBO;
			size_t lineCount;

			GLuint textVAO;
			GLuint textVertVBO;
			GLuint textColourVBO;
			GLuint textTexVBO;
			size_t textCount;

			bool   isNight;
		};
	}
}

