#pragma once

#include "GL/glew.h"

namespace ethyl::graphics
{
    class VBuffer
    {
    private:
        GLuint m_bufferId;
        GLuint m_componentCount;

    public:
        VBuffer(GLfloat* data, GLsizei count, GLuint componentCount);

        void bind() const;
        void unbind() const;

        inline GLuint getComponentCount() const { return m_componentCount; }
    };
}
