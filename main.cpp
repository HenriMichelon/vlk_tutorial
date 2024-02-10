#include <GLFW/glfw3.h>
#include <glm/vec3.hpp>

int main() {
    if (!glfwInit())
    {
        return 1;
    }
    GLFWwindow* window = glfwCreateWindow(800, 600, "VLK TEST", NULL, NULL);
    if (!window)
    {
        return 2;
    }

    glm::vec3 v3 = glm::vec3(0.0f, 0.0f, 0.0f);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}
