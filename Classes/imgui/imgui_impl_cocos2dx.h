#pragma once

struct GLFWwindow;

IMGUI_IMPL_API bool     ImGui_ImplCocos2dx_Init(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_RenderDrawData(ImDrawData* draw_data);

// Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplCocos2dx_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_DestroyDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplCocos2dx_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_DestroyFontsTexture();

IMGUI_IMPL_API void     ImGui_ImplCocos2dx_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplCocos2dx_CharCallback(GLFWwindow* window, unsigned int c);