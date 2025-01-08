// Syntax.cpp : Defines the entry point for the application.
//

#include "glad/gl.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

int main()
{
	// initialise glfw systems
	if ( glfwInit() != GL_TRUE )
	{
		std::cout << "Unable to initialize GLFW" << std::endl;
		return 1;
	}
	// create a windowed mode window and its OpenGL context
	GLFWwindow* m_window = glfwCreateWindow( 1280, 720, "GL Programming", nullptr, nullptr );
	if ( m_window == nullptr )
	{
		std::cout << "Unable to create a GLFW Window" << std::endl;
		glfwTerminate();
		return 1;
	}
	glfwMakeContextCurrent( m_window );

	if ( !gladLoadGL( glfwGetProcAddress ) )
	{
		glfwDestroyWindow( m_window );
		glfwTerminate();
		return 1;
	}

	
	glClearColor( 0.25f, 0.25f, 0.25f, 1.f );
	glEnable( GL_DEPTH_TEST );
	glEnable( GL_CULL_FACE );

	do
	{
		glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
		glfwSwapBuffers( m_window );
		glfwPollEvents();

	} while ( glfwWindowShouldClose( m_window ) == 0 );
	
	glfwTerminate();
	
	return 0;
}
