#pragma once

#include <GLFW/glfw3.h>

#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

class Gui {

private:
	ImGuiIO* io;

	static bool opt_fullscreen;
	static bool opt_padding;
	static ImGuiDockNodeFlags dockspace_flags;

public:
	Gui(GLFWwindow* window);

	void drawBegin();
	void drawEnd(unsigned int textureColorbuffer);

	void terminate();

};