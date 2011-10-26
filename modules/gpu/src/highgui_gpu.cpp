/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                          License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009, Willow Garage Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#include "precomp.hpp"

using namespace cv;
using namespace cv::gpu;
using namespace std;

#if (!defined WIN32 && !defined _WIN32) || !defined (HAVE_CUDA)

void cv::gpu::setGlDevice(int) { throw_nogpu(); }

void cv::gpu::imshow(const string&, const GpuMat&) { throw_nogpu(); }
void cv::gpu::imshow(const std::string&, const GlTexture&) { throw_nogpu(); }

void cv::gpu::imshow(const string&, const GpuMat&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::imshow(const string&, const GlTexture&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }

cv::gpu::Camera::Camera() { throw_nogpu(); }
void cv::gpu::Camera::lookAt(const Point3d&, const Point3d&, const Point3d&) { throw_nogpu(); }
void cv::gpu::Camera::setScale(const Point3d&) { throw_nogpu(); }
void cv::gpu::Camera::setProjectionMatrix(const Mat&) { throw_nogpu(); }
void cv::gpu::Camera::setPerspectiveProjection(double, double, double) { throw_nogpu(); }
void cv::gpu::Camera::setOrthoProjection(double, double, double, double, double, double) { throw_nogpu(); }

void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const Scalar&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GpuMat&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GlColorBuffer&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const Scalar&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const GlColorBuffer&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const Scalar&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GpuMat&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GlColorBuffer&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const Scalar&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const GlColorBuffer&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const Scalar&, const GpuMat&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GpuMat&, const GpuMat&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GlColorBuffer&, const GpuMat&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const Scalar&, const GpuMat&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const GlColorBuffer&, const GpuMat&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const Scalar&, const GpuMat&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GpuMat&, const GpuMat&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GlColorBuffer&, const GpuMat&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const Scalar&, const GpuMat&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const GlColorBuffer&, const GpuMat&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const Scalar&, const GlTexture&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GpuMat&, const GlTexture&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GlColorBuffer&, const GlTexture&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const Scalar&, const GlTexture&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const GlColorBuffer&, const GlTexture&, const Point2d&, const Point2d&) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const Scalar&, const GlTexture&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GpuMat&, const GlTexture&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GpuMat&, const Camera&, const GlColorBuffer&, const GlTexture&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const Scalar&, const GlTexture&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }
void cv::gpu::pointCloudShow(const string&, const GlVertexBuffer&, const Camera&, const GlColorBuffer&, const GlTexture&, const Point2d&, const Point2d&, const string&, const Point2d&, const Scalar&, int) { throw_nogpu(); }

cv::gpu::GlTexture::GlTexture() { throw_nogpu(); }
cv::gpu::GlTexture::GlTexture(int, int, int) { throw_nogpu(); }
cv::gpu::GlTexture::GlTexture(const Size&, int) { throw_nogpu(); }
cv::gpu::GlTexture::GlTexture(const GpuMat&) { throw_nogpu(); }
cv::gpu::GlTexture::GlTexture(const GlTexture&) { throw_nogpu(); }
cv::gpu::GlTexture::~GlTexture() {  }
GlTexture& cv::gpu::GlTexture::operator =(const GlTexture&) { throw_nogpu(); return *this; }
void cv::gpu::GlTexture::create(int, int, int) { throw_nogpu(); }
void cv::gpu::GlTexture::release() { throw_nogpu(); }
void cv::gpu::GlTexture::bind() const { throw_nogpu(); }
void cv::gpu::GlTexture::unbind() const { throw_nogpu(); }
void cv::gpu::GlTexture::copyFrom(const GpuMat&, Stream&) { throw_nogpu(); }
GpuMat cv::gpu::GlTexture::map(Stream&) { throw_nogpu(); return GpuMat(); }
void cv::gpu::GlTexture::unmap(Stream&) { throw_nogpu(); }
int cv::gpu::GlTexture::rows() const { throw_nogpu(); return 0; }
int cv::gpu::GlTexture::cols() const { throw_nogpu(); return 0; }
Size cv::gpu::GlTexture::size() const { throw_nogpu(); return Size(); }
bool cv::gpu::GlTexture::empty() const { throw_nogpu(); return false; }
int cv::gpu::GlTexture::type() const { throw_nogpu(); return 0; }
int cv::gpu::GlTexture::depth() const { throw_nogpu(); return 0; }
int cv::gpu::GlTexture::channels() const { throw_nogpu(); return 0; }
int cv::gpu::GlTexture::elemSize() const { throw_nogpu(); return 0; }
int cv::gpu::GlTexture::elemSize1() const { throw_nogpu(); return 0; }
void cv::gpu::GlTexture::swap(GlTexture&) { throw_nogpu(); }

cv::gpu::GlVertexBuffer::GlVertexBuffer() { throw_nogpu(); }
cv::gpu::GlVertexBuffer::GlVertexBuffer(int, int, int) { throw_nogpu(); }
cv::gpu::GlVertexBuffer::GlVertexBuffer(const Size&, int) { throw_nogpu(); }
cv::gpu::GlVertexBuffer::GlVertexBuffer(const GpuMat&) { throw_nogpu(); }
cv::gpu::GlVertexBuffer::GlVertexBuffer(const GlVertexBuffer&) { throw_nogpu(); }
cv::gpu::GlVertexBuffer::~GlVertexBuffer() {  }
GlVertexBuffer& cv::gpu::GlVertexBuffer::operator =(const GlVertexBuffer&) { throw_nogpu(); return *this; }
void cv::gpu::GlVertexBuffer::create(int, int, int) { throw_nogpu(); }
void cv::gpu::GlVertexBuffer::release() { throw_nogpu(); }
void cv::gpu::GlVertexBuffer::bind() const { throw_nogpu(); }
void cv::gpu::GlVertexBuffer::unbind() const { throw_nogpu(); }
void cv::gpu::GlVertexBuffer::copyFrom(const GpuMat&, Stream&) { throw_nogpu(); }
GpuMat cv::gpu::GlVertexBuffer::map(Stream&) { throw_nogpu(); return GpuMat(); }
void cv::gpu::GlVertexBuffer::unmap(Stream&) { throw_nogpu(); }
int cv::gpu::GlVertexBuffer::rows() const { throw_nogpu(); return 0; }
int cv::gpu::GlVertexBuffer::cols() const { throw_nogpu(); return 0; }
Size cv::gpu::GlVertexBuffer::size() const { throw_nogpu(); return Size(); }
bool cv::gpu::GlVertexBuffer::empty() const { throw_nogpu(); return false; }
int cv::gpu::GlVertexBuffer::type() const { throw_nogpu(); return 0; }
int cv::gpu::GlVertexBuffer::depth() const { throw_nogpu(); return 0; }
int cv::gpu::GlVertexBuffer::channels() const { throw_nogpu(); return 0; }
int cv::gpu::GlVertexBuffer::elemSize() const { throw_nogpu(); return 0; }
int cv::gpu::GlVertexBuffer::elemSize1() const { throw_nogpu(); return 0; }
void cv::gpu::GlVertexBuffer::swap(GlVertexBuffer&) { throw_nogpu(); }

cv::gpu::GlColorBuffer::GlColorBuffer() { throw_nogpu(); }
cv::gpu::GlColorBuffer::GlColorBuffer(int, int, int) { throw_nogpu(); }
cv::gpu::GlColorBuffer::GlColorBuffer(const Size&, int) { throw_nogpu(); }
cv::gpu::GlColorBuffer::GlColorBuffer(const GpuMat&) { throw_nogpu(); }
cv::gpu::GlColorBuffer::GlColorBuffer(const GlColorBuffer&) { throw_nogpu(); }
cv::gpu::GlColorBuffer::~GlColorBuffer() {  }
GlColorBuffer& cv::gpu::GlColorBuffer::operator =(const GlColorBuffer&) { throw_nogpu(); return *this; }
void cv::gpu::GlColorBuffer::create(int, int, int) { throw_nogpu(); }
void cv::gpu::GlColorBuffer::release() { throw_nogpu(); }
void cv::gpu::GlColorBuffer::bind() const { throw_nogpu(); }
void cv::gpu::GlColorBuffer::unbind() const { throw_nogpu(); }
void cv::gpu::GlColorBuffer::copyFrom(const GpuMat&, Stream&) { throw_nogpu(); }
GpuMat cv::gpu::GlColorBuffer::map(Stream&) { throw_nogpu(); return GpuMat(); }
void cv::gpu::GlColorBuffer::unmap(Stream&) { throw_nogpu(); }
int cv::gpu::GlColorBuffer::rows() const { throw_nogpu(); return 0; }
int cv::gpu::GlColorBuffer::cols() const { throw_nogpu(); return 0; }
Size cv::gpu::GlColorBuffer::size() const { throw_nogpu(); return Size(); }
bool cv::gpu::GlColorBuffer::empty() const { throw_nogpu(); return false; }
int cv::gpu::GlColorBuffer::type() const { throw_nogpu(); return 0; }
int cv::gpu::GlColorBuffer::depth() const { throw_nogpu(); return 0; }
int cv::gpu::GlColorBuffer::channels() const { throw_nogpu(); return 0; }
int cv::gpu::GlColorBuffer::elemSize() const { throw_nogpu(); return 0; }
int cv::gpu::GlColorBuffer::elemSize1() const { throw_nogpu(); return 0; }
void cv::gpu::GlColorBuffer::swap(GlColorBuffer&) { throw_nogpu(); }

#else

namespace
{
    bool __checkGlError(const char* file, const int line, const char* func = "")
    {
        GLenum err = glGetError();

        if (err != GL_NO_ERROR)
        {
            string msg;

            switch (err)
            {
            case GL_INVALID_ENUM:
                msg = "OpenGL: An unacceptable value is specified for an enumerated argument";
                break;
            case GL_INVALID_VALUE:
                msg = "OpenGL: A numeric argument is out of range";
                break;
            case GL_INVALID_OPERATION:
                msg = "OpenGL: The specified operation is not allowed in the current state";
                break;
            case GL_STACK_OVERFLOW:
                msg = "OpenGL: This command would cause a stack overflow";
                break;
            case GL_STACK_UNDERFLOW:
                msg = "OpenGL: This command would cause a stack underflow";
                break;
            case GL_OUT_OF_MEMORY:
                msg = "OpenGL: There is not enough memory left to execute the command";
                break;
            default:
                msg = "OpenGL: Unknown error";
            };

            cv::gpu::error(msg.c_str(), file, line, func);
            return false;
        }

        return true;
    }  
}

#if defined(__GNUC__)
#define checkGlError() CV_DbgAssert( __checkGlError(__FILE__, __LINE__, __func__) )
#else
#define checkGlError() CV_DbgAssert( __checkGlError(__FILE__, __LINE__) )
#endif

namespace
{    
    static const GLenum gl_types[] = {GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT, GL_SHORT, GL_INT, GL_FLOAT, GL_DOUBLE};
    static const size_t sizes[] = {sizeof(unsigned char), sizeof(signed char), sizeof(unsigned short), sizeof(short), sizeof(int), sizeof(float), sizeof(double)};
}

#ifndef GL_DYNAMIC_DRAW
#   define GL_DYNAMIC_DRAW 0x88E8
#endif

#ifndef GL_PIXEL_UNPACK_BUFFER
#   define GL_PIXEL_UNPACK_BUFFER 0x88EC
#endif

#ifndef GL_BGR
#   define GL_BGR 0x80E0
#endif

#ifndef GL_BGRA
#   define GL_BGRA 0x80E1
#endif

#ifndef GL_ARRAY_BUFFER
#   define GL_ARRAY_BUFFER 0x8892
#endif

//////////////////////////////////////////////////////////////////////////////////////////
// High Level API

void cv::gpu::setGlDevice(int device)
{ 
    cudaSafeCall( cudaGLSetGLDevice(device) ); 
}

namespace
{
    class Renderer
    {
    public:
        explicit Renderer(const string& windowName) : windowName_(windowName) {}

        virtual ~Renderer() {}

        virtual void render(int width, int height) = 0;

        const string& parentWindow() const { return windowName_; }

    private:
        string windowName_;
    };

    ///////////////////////////////////////////////////////////////////////
    // Callbacks

    const int MAX_RENDERERS = 100; // it should be enough ;)
    Renderer* g_renderers[MAX_RENDERERS];
    int g_renderersCount = 0;

    class FindByWindowName
    {
    public:
        explicit FindByWindowName(const string& windowName) : windowName_(windowName) {}

        bool operator ()(Renderer* r)
        {
            return r->parentWindow() == windowName_;
        }

    private:
        string windowName_;
    };
    
    void CV_CDECL drawCallback(int width, int height, void* userdata)
    {
        Renderer* renderer = (Renderer*)userdata;

        if (renderer)
            renderer->render(width, height);
    }

    void CV_CDECL closeCallback(void* userdata)
    {
        Renderer* renderer = (Renderer*)userdata;

        if (renderer)
        {
            ptrdiff_t ind = find(g_renderers, g_renderers + g_renderersCount, renderer) - g_renderers;

            if (ind < g_renderersCount)
            {
                swap(g_renderers[ind], g_renderers[--g_renderersCount]);
                delete renderer;
            }
        }
    }

    template <typename T> T* getRenderer(const string& windowName)
    {
        ptrdiff_t ind = find_if(g_renderers, g_renderers + g_renderersCount, FindByWindowName(windowName)) - g_renderers;

        if (ind >= g_renderersCount)
        {
            CV_Assert(g_renderersCount < MAX_RENDERERS);

            T* r = new T(windowName);
            g_renderers[g_renderersCount++] = r;
            return r;
        }

        Renderer* r = g_renderers[ind];

        if (T* nr = dynamic_cast<T*>(r))
            return nr;

        delete r;
        
        T* nr = new T(windowName);
        g_renderers[ind] = nr;

        return nr;
    }

    ///////////////////////////////////////////////////////////////////////
    // TextureRenderer

    class TextureRenderer : public Renderer
    {
    public:
        explicit TextureRenderer(const string& windowName) : Renderer(windowName), topLeft_(0.0, 0.0), bottonRight_(1.0, 1.0) 
        {
        }

        void set(const GlTexture& tex)
        {
            tex_ = tex;
        }

        void set(const GpuMat& img)
        {
            if (!img.empty())
            {
                GpuMat mat;

                if (img.cols % 16 == 0)
                    mat = img;
                else
                {
                    copyMakeBorder(img, mat, 0, 0, 0, 16 - img.cols % 16, BORDER_REPLICATE);
                }

                tex_.copyFrom(mat);
            }
        }

        void setPos(const Point2d& topLeft, const Point2d& bottonRight)
        {
            topLeft_ = topLeft;
            bottonRight_ = bottonRight;
        }

        void render(int, int)
        {
            if (!tex_.empty())
            {
                tex_.bind();

                glDisable(GL_DEPTH_TEST);

                glMatrixMode(GL_PROJECTION);
                glLoadIdentity();
                glOrtho(0, 1, 1, 0, -1, 1);

                glMatrixMode(GL_MODELVIEW);
                glLoadIdentity();

                glColor3d(1.0, 1.0, 1.0);

                glBegin(GL_QUADS);
                    glVertex2d(topLeft_.x, topLeft_.y);
                    glTexCoord2d(1.0, 0.0);	 

                    glVertex2d(bottonRight_.x, topLeft_.y);
                    glTexCoord2d(1.0, 1.0);

                    glVertex2d(bottonRight_.x, bottonRight_.y);
                    glTexCoord2d(0.0, 1.0);	 

                    glVertex2d(topLeft_.x, bottonRight_.y);
                    glTexCoord2d(0.0, 0.0);	
                glEnd();

                checkGlError();

                tex_.unbind();
            }
        }

    private:
        GlTexture tex_;

        Point2d topLeft_;
        Point2d bottonRight_;
    };

    ///////////////////////////////////////////////////////////////////////
    // TextRenderer   

    void bitmapString(int fontID, const unsigned char* string);

    class TextRenderer : public Renderer
    {
    public:
        explicit TextRenderer(const string& windowName) : Renderer(windowName) 
        {
        }

        void set(const string& text, const Point2f& loc, const Scalar& color, int font)
        {
            text_ = text;
            loc_ = loc;
            color_ = color;
            font_ = font;
        }

        void render(int, int)
        {
            glDisable(GL_DEPTH_TEST);

            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glOrtho(0, 1, 1, 0, -1, 1);

            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();

            glColor3dv(color_.val);

            glRasterPos2d(loc_.x, loc_.y);

            bitmapString(font_, (const unsigned char*)text_.c_str());

            checkGlError();
        }

    private:
        string text_;
        Point2f loc_;
        Scalar color_;
        int font_;
    };

    ///////////////////////////////////////////////////////////////////////
    // PairRenderer

    template <typename R1, typename R2> class PairRenderer : public pair<R1, R2>, public Renderer
    {
    public:
        explicit PairRenderer(const string& windowName) : pair<R1, R2>(make_pair(R1(windowName), R2(windowName))), Renderer(windowName) 
        {
        }

        void render(int width, int height)
        {
            first.render(width, height);
            second.render(width, height);
        }
    };
}

void cv::gpu::imshow(const string& windowName, const GpuMat& img) 
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, img.cols, img.rows);

    setGlContext(windowName);

    TextureRenderer* renderer = getRenderer<TextureRenderer>(windowName);

    renderer->set(img);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::imshow(const string& windowName, const GlTexture& tex) 
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, tex.cols(), tex.rows());

    setGlContext(windowName);

    TextureRenderer* renderer = getRenderer<TextureRenderer>(windowName);

    renderer->set(tex);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::imshow(const string& windowName, const GpuMat& img, const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, img.cols, img.rows);

    setGlContext(windowName);

    PairRenderer<TextureRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<TextureRenderer, TextRenderer> >(windowName);

    renderer->first.set(img);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::imshow(const string& windowName, const GlTexture& tex, const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, tex.cols(), tex.rows());

    setGlContext(windowName);

    PairRenderer<TextureRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<TextureRenderer, TextRenderer> >(windowName);

    renderer->first.set(tex);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

namespace
{
    class GlCamera : public Camera
    {
    public:
        GlCamera() {}
        GlCamera(const Camera& cam) : Camera(cam) {}

        GlCamera& operator =(const Camera& cam)
        {
            Camera::operator =(cam);
            return *this;
        }

        void setProjectionMatrix(double aspect)
        {
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();

            if (projectionMatrix_.empty())
            {
                if (perspectiveProjection_)
                    gluPerspective(fov_, aspect, zNear_, zFar_);
                else
                    glOrtho(left_, right_, bottom_, top_, zNear_, zFar_);
            }
            else
            {
                if (projectionMatrix_.type() == CV_32F)
                    glLoadMatrixf(projectionMatrix_.ptr<float>());
                else
                    glLoadMatrixd(projectionMatrix_.ptr<double>());
            }

            checkGlError();
        }

        void setModelViewMatrix()
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();

            gluLookAt(eye_.x, eye_.y, eye_.z, center_.x, center_.y, center_.z, up_.x, up_.y, up_.z);

            glScaled(scale_.x, scale_.y, scale_.z);

            checkGlError();
        }
    };

    ///////////////////////////////////////////////////////////////////////
    // PointCloudRenderer  

    class PointCloudRenderer : public Renderer
    {
    public:
        explicit PointCloudRenderer(const string& windowName) : Renderer(windowName)
        {
        }

        void setPoints(const GlVertexBuffer& vb)
        {
            vb_ = vb;
        }

        void setPoints(const GpuMat& points)
        {
            vb_.copyFrom(points);
        }

        void setColor(const GlColorBuffer& cb)
        {
            cb_ = cb;
        }

        void setColor(const GpuMat& colors)
        {
            cb_.copyFrom(colors);
        }

        void setColor(const Scalar& color)
        {
            cb_.release();
            color_ = color;
        }

        void setCamera(const Camera& camera)
        {
            camera_ = camera;
        }

        void render(int width, int height)
        {
            if (!vb_.empty())
            {
                glEnable(GL_DEPTH_TEST);

                camera_.setProjectionMatrix(static_cast<double>(width) / height);
                camera_.setModelViewMatrix();

                if (cb_.empty())
                    glColor4dv(color_.val);
                else
                {
                    CV_Assert(cb_.size().area() == vb_.size().area());

                    cb_.bind();
                }

                vb_.bind();

                glDrawArrays(GL_POINTS, 0, vb_.size().area());
                checkGlError();

                vb_.unbind();

                if (!cb_.empty())
                    cb_.unbind();
            }
        }

    private:
        GlVertexBuffer vb_;
        GlColorBuffer cb_;

        Scalar color_;

        GlCamera camera_;
    };
}

cv::gpu::Camera::Camera() : 
    eye_(0.0, 0.0, -5.0), center_(0.0, 0.0, 0.0), up_(0.0, 1.0, 0.0),            
    scale_(1.0, 1.0, 1.0),
    perspectiveProjection_(true), 
    fov_(45.0),
    left_(0.0), right_(1.0), bottom_(1.0), top_(0.0),
    zNear_(0.1), zFar_(1000.0)
{
}

void cv::gpu::Camera::lookAt(const Point3d& eye, const Point3d& center, const Point3d& up)
{
    eye_ = eye;
    center_ = center;
    up_ = up;
}

void cv::gpu::Camera::setScale(const Point3d& scale)
{
    scale_ = scale;
}

void cv::gpu::Camera::setProjectionMatrix(const Mat& projectionMatrix)
{
    CV_Assert(projectionMatrix.type() == CV_32F || projectionMatrix.type() == CV_64F);
    CV_Assert(projectionMatrix.cols == 4 && projectionMatrix.rows == 4);

    projectionMatrix_ = projectionMatrix.t();
}

void cv::gpu::Camera::setPerspectiveProjection(double fov, double zNear, double zFar)
{
    projectionMatrix_.release();

    perspectiveProjection_ = true;

    fov_ = fov;

    zNear_ = zNear;
    zFar_ = zFar;
}

void cv::gpu::Camera::setOrthoProjection(double left, double right, double bottom, double top, double zNear, double zFar)
{
    projectionMatrix_.release();

    perspectiveProjection_ = false;

    left_ = left;
    right_ = right;
    bottom_ = bottom;
    top_ = top;

    zNear_ = zNear;
    zFar_ = zFar;
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const Scalar& color)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PointCloudRenderer* renderer = getRenderer<PointCloudRenderer>(windowName);

    renderer->setPoints(points);
    renderer->setColor(color);
    renderer->setCamera(camera);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GpuMat& colors)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PointCloudRenderer* renderer = getRenderer<PointCloudRenderer>(windowName);

    renderer->setPoints(points);
    renderer->setColor(colors);
    renderer->setCamera(camera);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GlColorBuffer& colors)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PointCloudRenderer* renderer = getRenderer<PointCloudRenderer>(windowName);

    renderer->setPoints(points);
    renderer->setColor(colors);
    renderer->setCamera(camera);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const Scalar& color)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PointCloudRenderer* renderer = getRenderer<PointCloudRenderer>(windowName);

    renderer->setPoints(points);
    renderer->setColor(color);
    renderer->setCamera(camera);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const GlColorBuffer& colors)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PointCloudRenderer* renderer = getRenderer<PointCloudRenderer>(windowName);

    renderer->setPoints(points);
    renderer->setColor(colors);
    renderer->setCamera(camera);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const Scalar& color,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(color);
    renderer->first.setCamera(camera);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GpuMat& colors,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GlColorBuffer& colors,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const Scalar& color,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(color);
    renderer->first.setCamera(camera);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const GlColorBuffer& colors,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const Scalar& color,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(color);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GpuMat& colors,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GlColorBuffer& colors,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const Scalar& color,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(color);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const GlColorBuffer& colors,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const Scalar& color,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(color);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GpuMat& colors,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(colors);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GlColorBuffer& colors,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(colors);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const Scalar& color,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(color);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const GlColorBuffer& colors,
                             const GpuMat& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(colors);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const Scalar& color,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(color);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GpuMat& colors,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GlColorBuffer& colors,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const Scalar& color,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(color);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const GlColorBuffer& colors,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PointCloudRenderer, TextureRenderer>* renderer = getRenderer< PairRenderer<PointCloudRenderer, TextureRenderer> >(windowName);

    renderer->first.setPoints(points);
    renderer->first.setColor(colors);
    renderer->first.setCamera(camera);
    renderer->second.set(img);
    renderer->second.setPos(topLeft, bottonRight);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const Scalar& color,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(color);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GpuMat& colors,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(colors);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GpuMat& points, const Camera& camera, const GlColorBuffer& colors,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(colors);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const Scalar& color,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(color);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

void cv::gpu::pointCloudShow(const string& windowName, const GlVertexBuffer& points, const Camera& camera, const GlColorBuffer& colors,
                             const GlTexture& img, const Point2d& topLeft, const Point2d& bottonRight,
                             const string& text, const Point2d& textLoc, const Scalar& textColor, int textFont)
{
    namedWindow(windowName, WINDOW_OPENGL);

    if (getWindowProperty(windowName, WND_PROP_AUTOSIZE))
        resizeWindow(windowName, 800, 600);

    setGlContext(windowName);

    PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer>* renderer = 
        getRenderer< PairRenderer<PairRenderer<PointCloudRenderer, TextureRenderer>, TextRenderer> >(windowName);

    renderer->first.first.setPoints(points);
    renderer->first.first.setColor(colors);
    renderer->first.first.setCamera(camera);
    renderer->first.second.set(img);
    renderer->first.second.setPos(topLeft, bottonRight);
    renderer->second.set(text, textLoc, textColor, textFont);

    setGlDrawCallback(windowName, drawCallback, (Renderer*)renderer);
    setCloseCallback(windowName, closeCallback, (Renderer*)renderer);

    updateWindow(windowName);
}

//////////////////////////////////////////////////////////////////////////////////////////
// GlResource

namespace
{
    class GlResource
    {
        class MapResources
        {
        public:
            MapResources(cudaGraphicsResource_t* resource, cudaStream_t stream) : resource_(resource), stream_(stream)
            {
                cudaSafeCall( cudaGraphicsMapResources(1, resource_, stream_) );
            }

            ~MapResources()
            {
                if (resource_)
                    cudaGraphicsUnmapResources(1, resource_, stream_);
            }

            void release()
            {
                resource_ = 0;
            }

        private:
            cudaGraphicsResource_t* resource_;
            cudaStream_t stream_;
        };

    public:
        GlResource() : resource_(0) 
        {
        }

        ~GlResource() 
        { 
            if (resource_)
            {
                cudaGraphicsUnregisterResource(resource_);
                resource_ = 0;
            } 
        }

        void registerBuffer(unsigned int buffer)
        {
            cudaGraphicsResource_t resource;
            cudaSafeCall( cudaGraphicsGLRegisterBuffer(&resource, buffer, cudaGraphicsMapFlagsNone) );

            resource_ = resource;
        }

        void copyFrom(const GpuMat& mat, cudaStream_t stream)
        {
            MapResources mapHandler(&resource_, stream);

            void* dst_ptr;
            size_t num_bytes;
            cudaSafeCall( cudaGraphicsResourceGetMappedPointer(&dst_ptr, &num_bytes, resource_) );
            
            const void* src_ptr = mat.ptr();
            size_t widthBytes = mat.cols * mat.elemSize();

            CV_Assert(widthBytes * mat.rows <= num_bytes);

            if (stream == 0)
                cudaSafeCall( cudaMemcpy2D(dst_ptr, widthBytes, src_ptr, mat.step, widthBytes, mat.rows, cudaMemcpyDeviceToDevice) );
            else
                cudaSafeCall( cudaMemcpy2DAsync(dst_ptr, widthBytes, src_ptr, mat.step, widthBytes, mat.rows, cudaMemcpyDeviceToDevice, stream) );
        }

        GpuMat map(int rows, int cols, int type, cudaStream_t stream)
        {
            MapResources mapHandler(&resource_, stream);

            void* ptr;
            size_t num_bytes;
            cudaSafeCall( cudaGraphicsResourceGetMappedPointer(&ptr, &num_bytes, resource_) );

            CV_Assert( static_cast<size_t>(cols) * CV_ELEM_SIZE(type) * rows <= num_bytes );

            mapHandler.release();

            return GpuMat(rows, cols, type, ptr);
        }

        void unmap(cudaStream_t stream)
        {
            cudaGraphicsUnmapResources(1, &resource_, stream);
        }

    private:
        cudaGraphicsResource_t resource_;
    };
}

//////////////////////////////////////////////////////////////////////////////////////////
// GlBuffer

CV_EXPORTS void icvGlGenBuffers(int n, unsigned int* buffers);
CV_EXPORTS void icvGlBufferData(unsigned int target, ptrdiff_t size, const void *data, unsigned int usage);
CV_EXPORTS void icvGlDeleteBuffers(int n, const unsigned int* buffers);
CV_EXPORTS void icvGlBindBuffer(unsigned int target, unsigned int buffer);

namespace
{
    class GlBuffer
    {
        class GenBuffers
        {
        public:
            GenBuffers()
            {
                icvGlGenBuffers(1, &buffer_);
                checkGlError();
            }

            ~GenBuffers()
            {
                if (buffer_)
                {
                    icvGlDeleteBuffers(1, &buffer_);
                    buffer_ = 0;
                }
            }

            unsigned int get() const
            {
                return buffer_;
            }

            unsigned int release()
            {
                unsigned int res = buffer_;
                buffer_ = 0;
                return res;
            }

        private:
            unsigned int buffer_;
        };

        class Unbind
        {
        public:
            explicit Unbind(unsigned int buf_type) : buf_type_(buf_type), undind_(true) 
            { 
            }

            ~Unbind()
            {
                if (undind_)
                    icvGlBindBuffer(buf_type_, 0);
            }

            void release()
            {
                undind_ = false;
            }

        private:
            unsigned int buf_type_;
            bool undind_;
        };

    public:
        explicit GlBuffer(unsigned int buf_type) : rows_(0), cols_(0), type_(0), buf_type_(buf_type), buffer_(0) 
        {
        }

        GlBuffer(int rows, int cols, int type, unsigned int buf_type) : rows_(0), cols_(0), type_(0), buf_type_(buf_type), buffer_(0) 
        { 
            int depth = CV_MAT_DEPTH(type);
            int cn = CV_MAT_CN(type);

            CV_Assert(rows > 0 && cols > 0);
            CV_Assert(depth >= 0 && depth <= CV_64F);

            GenBuffers buffer;
            
            size_t size = rows * cols * sizes[depth] * cn;            

            icvGlBindBuffer(buf_type_, buffer.get());
            checkGlError();

            icvGlBufferData(buf_type_, size, 0, GL_DYNAMIC_DRAW);
            checkGlError();

            icvGlBindBuffer(buf_type_, 0);

            res_.registerBuffer(buffer.get());

            rows_ = rows;
            cols_ = cols;
            type_ = type;
            buffer_ = buffer.release();
        }

        ~GlBuffer() 
        { 
            if (buffer_)
            {
                icvGlDeleteBuffers(1, &buffer_);
                buffer_ = 0;
            }
        }

        void bind() const 
        {
            CV_Assert(buffer_ != 0);

            Unbind bindHadler(buf_type_);

            icvGlBindBuffer(buf_type_, buffer_); 
            checkGlError();

            bindHadler.release();
        }

        void unbind() const
        { 
            icvGlBindBuffer(buf_type_, 0);
        }

        void copyFrom(const GpuMat& mat, cudaStream_t stream) 
        {
            CV_Assert(buffer_ != 0);

            CV_DbgAssert(rows_ == mat.rows && cols_ == mat.cols && type_ == mat.type());

            res_.copyFrom(mat, stream); 
        }

        GpuMat map(cudaStream_t stream) 
        { 
            CV_Assert(buffer_ != 0);

            return res_.map(rows_, cols_, type_, stream); 
        }

        void unmap(cudaStream_t stream) 
        { 
            res_.unmap(stream); 
        }

        int rows() const { return rows_; }
        int cols() const { return cols_; }
        Size size() const { return Size(cols_, rows_); }
        bool empty() const { return rows_ == 0 || cols_ == 0; }

        int type() const { return type_; }
        int depth() const { return CV_MAT_DEPTH(type_); }
        int channels() const { return CV_MAT_CN(type_); }
        int elemSize() const { return CV_ELEM_SIZE(type_); }
        int elemSize1() const { return CV_ELEM_SIZE1(type_); }

    private:
        int rows_;
        int cols_;
        int type_;

        unsigned int buf_type_;
        unsigned int buffer_;

        GlResource res_;
    };
}

//////////////////////////////////////////////////////////////////////////////////////////
// GlTexture

class cv::gpu::GlTexture::Impl : private GlBuffer
{
    class BindTexture
    {
    public:
        BindTexture(const GlBuffer* buf, unsigned int tex, unsigned int internalFormat, unsigned int format, int cols, int rows, int depth) : 
          buf_(buf), undind_(true)
        {
            glEnable(GL_TEXTURE_2D);
            checkGlError();

            buf_->bind();

            glBindTexture(GL_TEXTURE_2D, tex);
            checkGlError();

            glTexImage2D(GL_TEXTURE_2D, 0, internalFormat, cols, rows, 0, format, gl_types[depth], 0);
            checkGlError();
        }

        ~BindTexture()
        {
            buf_->unbind();

            if (undind_)
            {
                glBindTexture(GL_TEXTURE_2D, 0);
                glDisable(GL_TEXTURE_2D);
            }
        }

        void release()
        {
            undind_ = false;
        }

    private:
        const GlBuffer* buf_;
        bool undind_;
    };

public:
    Impl() : GlBuffer(GL_PIXEL_UNPACK_BUFFER), tex_(0), internalFormat_(0), format_(0) 
    {
    }

    Impl(int rows, int cols, int type) : GlBuffer(rows, cols, type, GL_PIXEL_UNPACK_BUFFER), tex_(0), internalFormat_(0), format_(0) 
    { 
        int depth = CV_MAT_DEPTH(type);
        int cn = CV_MAT_CN(type);

        CV_Assert(rows > 0 && cols > 0 && cols % 16 == 0);
        CV_Assert(cn == 1 || cn == 3 || cn == 4);
        CV_Assert(depth >= 0 && depth <= CV_32F);

        glGenTextures(1, &tex_);
        checkGlError();

        internalFormat_ = cn == 1 ? GL_LUMINANCE : cn == 3 ? GL_RGB : GL_RGBA;
        format_ = cn == 1 ? GL_LUMINANCE : cn == 3 ? GL_BGR : GL_BGRA;
    }

    ~Impl() 
    { 
        if (tex_)
        {
            glDeleteTextures(1, &tex_);
            tex_ = 0;
        }
    }

    void bind() const
    {
        CV_Assert(tex_ != 0);

        BindTexture texBind(this, tex_, internalFormat_, format_, cols(), rows(), depth());

        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        checkGlError();
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        checkGlError();
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        checkGlError();
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        checkGlError();

        texBind.release();
    }

    void unbind() const
    {
        glBindTexture(GL_TEXTURE_2D, 0);

        glDisable(GL_TEXTURE_2D);
    }

    using GlBuffer::copyFrom;

    using GlBuffer::map;
    using GlBuffer::unmap;

    using GlBuffer::rows;
    using GlBuffer::cols;
    using GlBuffer::size;
    using GlBuffer::empty;

    using GlBuffer::type;
    using GlBuffer::depth;
    using GlBuffer::channels;
    using GlBuffer::elemSize;
    using GlBuffer::elemSize1;

private:
    unsigned int tex_;

    int internalFormat_;
    int format_;
};

cv::gpu::GlTexture::GlTexture() : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl);

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlTexture::GlTexture(int rows, int cols, int type) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(rows, cols, type));

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlTexture::GlTexture(const Size& size, int type) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(size.height, size.width, type));

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlTexture::GlTexture(const GpuMat& mat) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(mat.rows, mat.cols, mat.type()));
    impl->copyFrom(mat, 0);

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlTexture::GlTexture(const GlTexture& other) : impl_(other.impl_), refcount_(other.refcount_)
{
    CV_XADD(refcount_, 1);
}

cv::gpu::GlTexture::~GlTexture()
{
    if (CV_XADD(refcount_, -1) == 1)
    {
        delete impl_;
        fastFree(refcount_);
    }
}

GlTexture& cv::gpu::GlTexture::operator =(const GlTexture& other)
{
    GlTexture temp(other);
    temp.swap(*this);
    return *this;
}

void cv::gpu::GlTexture::create(int rows_, int cols_, int type_)
{
    if (rows_ != rows() || cols_ != cols() || type_ != type())
    {
        GlTexture temp(rows_, cols_, type_);
        temp.swap(*this);
    }
}

void cv::gpu::GlTexture::release()
{
    GlTexture temp;
    temp.swap(*this);
}

void cv::gpu::GlTexture::bind() const
{
    impl_->bind();
}

void cv::gpu::GlTexture::unbind() const
{
    impl_->unbind();
}

void cv::gpu::GlTexture::copyFrom(const GpuMat& mat, Stream& stream)
{
    create(mat.rows, mat.cols, mat.type());

    impl_->copyFrom(mat, StreamAccessor::getStream(stream));
}

GpuMat cv::gpu::GlTexture::map(Stream& stream)
{
    return impl_->map(StreamAccessor::getStream(stream));
}

void cv::gpu::GlTexture::unmap(Stream& stream)
{
    impl_->unmap(StreamAccessor::getStream(stream));
}

int cv::gpu::GlTexture::rows() const
{
    return impl_->rows();
}

int cv::gpu::GlTexture::cols() const
{
    return impl_->cols();
}

Size cv::gpu::GlTexture::size() const
{
    return impl_->size();
}

bool cv::gpu::GlTexture::empty() const
{
    return impl_->empty();
}

int cv::gpu::GlTexture::type() const
{
    return impl_->type();
}

int cv::gpu::GlTexture::depth() const
{
    return impl_->depth();
}

int cv::gpu::GlTexture::channels() const
{
    return impl_->channels();
}

int cv::gpu::GlTexture::elemSize() const
{
    return impl_->elemSize();
}

int cv::gpu::GlTexture::elemSize1() const
{
    return impl_->elemSize1();
}

void cv::gpu::GlTexture::swap(GlTexture& other)
{
    std::swap(impl_, other.impl_);
    std::swap(refcount_, other.refcount_);
}

//////////////////////////////////////////////////////////////////////////////////////////
// GlVertexBuffer

class cv::gpu::GlVertexBuffer::Impl : private GlBuffer
{
public:
    Impl() : GlBuffer(GL_ARRAY_BUFFER)
    {
    }

    Impl(int rows, int cols, int type) : GlBuffer(rows, cols, type, GL_ARRAY_BUFFER)
    {
        int cn = CV_MAT_CN(type);
        int depth = CV_MAT_DEPTH(type);

        CV_Assert(rows > 0 && cols > 0);
        CV_Assert(cn == 2 || cn ==3 || cn == 4);
        CV_Assert(depth == CV_16S || depth == CV_32S || depth == CV_32F || depth == CV_64F);
    }


    void bind() const
    {
        glEnableClientState(GL_VERTEX_ARRAY);
        checkGlError();

        GlBuffer::bind();

        glVertexPointer(channels(), gl_types[depth()], 0, 0);
        checkGlError();
    }

    void unbind() const
    {
        GlBuffer::unbind();

        glDisableClientState(GL_VERTEX_ARRAY);
    }

    using GlBuffer::copyFrom;

    using GlBuffer::map;
    using GlBuffer::unmap;

    using GlBuffer::rows;
    using GlBuffer::cols;
    using GlBuffer::size;
    using GlBuffer::empty;

    using GlBuffer::type;
    using GlBuffer::depth;
    using GlBuffer::channels;
    using GlBuffer::elemSize;
    using GlBuffer::elemSize1;
};

cv::gpu::GlVertexBuffer::GlVertexBuffer() : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl);

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlVertexBuffer::GlVertexBuffer(int rows, int cols, int type) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(rows, cols, type));

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlVertexBuffer::GlVertexBuffer(const Size& size, int type) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(size.height, size.width, type));

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlVertexBuffer::GlVertexBuffer(const GpuMat& mat) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(mat.rows, mat.cols, mat.type()));
    impl->copyFrom(mat, 0);

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlVertexBuffer::GlVertexBuffer(const GlVertexBuffer& other) : impl_(other.impl_), refcount_(other.refcount_)
{
    CV_XADD(refcount_, 1);
}

cv::gpu::GlVertexBuffer::~GlVertexBuffer()
{
    if (CV_XADD(refcount_, -1) == 1)
    {
        delete impl_;
        fastFree(refcount_);
    }
}

GlVertexBuffer& cv::gpu::GlVertexBuffer::operator =(const GlVertexBuffer& other)
{
    GlVertexBuffer temp(other);
    temp.swap(*this);
    return *this;
}

void cv::gpu::GlVertexBuffer::create(int rows_, int cols_, int type_)
{
    if (rows_ != rows() || cols_ != cols() || type_ != type())
    {
        GlVertexBuffer temp(rows_, cols_, type_);
        temp.swap(*this);
    }
}

void cv::gpu::GlVertexBuffer::release()
{
    GlVertexBuffer temp;
    temp.swap(*this);
}

void cv::gpu::GlVertexBuffer::bind() const
{
    impl_->bind();
}

void cv::gpu::GlVertexBuffer::unbind() const
{
    impl_->unbind();
}

void cv::gpu::GlVertexBuffer::copyFrom(const GpuMat& mat, Stream& stream)
{
    create(mat.rows, mat.cols, mat.type());

    impl_->copyFrom(mat, StreamAccessor::getStream(stream));
}

GpuMat cv::gpu::GlVertexBuffer::map(Stream& stream)
{
    return impl_->map(StreamAccessor::getStream(stream));
}

void cv::gpu::GlVertexBuffer::unmap(Stream& stream)
{
    impl_->unmap(StreamAccessor::getStream(stream));
}

int cv::gpu::GlVertexBuffer::rows() const
{
    return impl_->rows();
}

int cv::gpu::GlVertexBuffer::cols() const
{
    return impl_->cols();
}

Size cv::gpu::GlVertexBuffer::size() const
{
    return impl_->size();
}

bool cv::gpu::GlVertexBuffer::empty() const
{
    return impl_->empty();
}

int cv::gpu::GlVertexBuffer::type() const
{
    return impl_->type();
}

int cv::gpu::GlVertexBuffer::depth() const
{
    return impl_->depth();
}

int cv::gpu::GlVertexBuffer::channels() const
{
    return impl_->channels();
}

int cv::gpu::GlVertexBuffer::elemSize() const
{
    return impl_->elemSize();
}

int cv::gpu::GlVertexBuffer::elemSize1() const
{
    return impl_->elemSize1();
}

void cv::gpu::GlVertexBuffer::swap(GlVertexBuffer& other)
{
    std::swap(impl_, other.impl_);
    std::swap(refcount_, other.refcount_);
}

//////////////////////////////////////////////////////////////////////////////////////////
// GlColorBuffer

class cv::gpu::GlColorBuffer::Impl : private GlBuffer
{
public:
    Impl() : GlBuffer(GL_ARRAY_BUFFER)
    {
    }

    Impl(int rows, int cols, int type) : GlBuffer(rows, cols, type, GL_ARRAY_BUFFER)
    {
        int cn = CV_MAT_CN(type);
        int depth = CV_MAT_DEPTH(type);

        CV_Assert(rows > 0 && cols > 0);
        CV_Assert(cn ==3 || cn == 4);
        CV_Assert(depth >= 0 && depth <= CV_64F);
    }


    void bind() const
    {
        glEnableClientState(GL_COLOR_ARRAY);
        checkGlError();

        GlBuffer::bind();

        glColorPointer(channels(), gl_types[depth()], 0, 0);
        checkGlError();
    }

    void unbind() const
    {
        GlBuffer::unbind();

        glDisableClientState(GL_COLOR_ARRAY);
    }

    using GlBuffer::copyFrom;

    using GlBuffer::map;
    using GlBuffer::unmap;

    using GlBuffer::rows;
    using GlBuffer::cols;
    using GlBuffer::size;
    using GlBuffer::empty;

    using GlBuffer::type;
    using GlBuffer::depth;
    using GlBuffer::channels;
    using GlBuffer::elemSize;
    using GlBuffer::elemSize1;
};

cv::gpu::GlColorBuffer::GlColorBuffer() : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl);

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlColorBuffer::GlColorBuffer(int rows, int cols, int type) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(rows, cols, type));

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlColorBuffer::GlColorBuffer(const Size& size, int type) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(size.height, size.width, type));

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlColorBuffer::GlColorBuffer(const GpuMat& mat) : impl_(0), refcount_(0)
{
    auto_ptr<Impl> impl(new Impl(mat.rows, mat.cols, mat.type()));
    impl->copyFrom(mat, 0);

    refcount_ = static_cast<int*>(fastMalloc(sizeof(int)));
    *refcount_ = 1;

    impl_ = impl.release();
}

cv::gpu::GlColorBuffer::GlColorBuffer(const GlColorBuffer& other) : impl_(other.impl_), refcount_(other.refcount_)
{
    CV_XADD(refcount_, 1);
}

cv::gpu::GlColorBuffer::~GlColorBuffer()
{
    if (CV_XADD(refcount_, -1) == 1)
    {
        delete impl_;
        fastFree(refcount_);
    }
}

GlColorBuffer& cv::gpu::GlColorBuffer::operator =(const GlColorBuffer& other)
{
    GlColorBuffer temp(other);
    temp.swap(*this);
    return *this;
}

void cv::gpu::GlColorBuffer::create(int rows_, int cols_, int type_)
{
    if (rows_ != rows() || cols_ != cols() || type_ != type())
    {
        GlColorBuffer temp(rows_, cols_, type_);
        temp.swap(*this);
    }
}

void cv::gpu::GlColorBuffer::release()
{
    GlColorBuffer temp;
    temp.swap(*this);
}

void cv::gpu::GlColorBuffer::bind() const
{
    impl_->bind();
}

void cv::gpu::GlColorBuffer::unbind() const
{
    impl_->unbind();
}

void cv::gpu::GlColorBuffer::copyFrom(const GpuMat& mat, Stream& stream)
{
    create(mat.rows, mat.cols, mat.type());

    impl_->copyFrom(mat, StreamAccessor::getStream(stream));
}

GpuMat cv::gpu::GlColorBuffer::map(Stream& stream)
{
    return impl_->map(StreamAccessor::getStream(stream));
}

void cv::gpu::GlColorBuffer::unmap(Stream& stream)
{
    impl_->unmap(StreamAccessor::getStream(stream));
}

int cv::gpu::GlColorBuffer::rows() const
{
    return impl_->rows();
}

int cv::gpu::GlColorBuffer::cols() const
{
    return impl_->cols();
}

Size cv::gpu::GlColorBuffer::size() const
{
    return impl_->size();
}

bool cv::gpu::GlColorBuffer::empty() const
{
    return impl_->empty();
}

int cv::gpu::GlColorBuffer::type() const
{
    return impl_->type();
}

int cv::gpu::GlColorBuffer::depth() const
{
    return impl_->depth();
}

int cv::gpu::GlColorBuffer::channels() const
{
    return impl_->channels();
}

int cv::gpu::GlColorBuffer::elemSize() const
{
    return impl_->elemSize();
}

int cv::gpu::GlColorBuffer::elemSize1() const
{
    return impl_->elemSize1();
}

void cv::gpu::GlColorBuffer::swap(GlColorBuffer& other)
{
    std::swap(impl_, other.impl_);
    std::swap(refcount_, other.refcount_);
}

//////////////////////////////////////////////////////////////////////////////
// Font Data
//
// Was copied from freeGLUT

/*
 * The following bitmapped fonts are defined in this file:
 * 
 * 1. fgFontFixed8x13
 *       -misc-fixed-medium-r-normal--13-120-75-75-C-80-iso8859-1
 * 2. fgFontFixed9x15
 *       -misc-fixed-medium-r-normal--15-140-75-75-C-90-iso8859-1
 * 3. fgFontHelvetica10
 *       -adobe-helvetica-medium-r-normal--10-100-75-75-p-56-iso8859-1
 * 4. fgFontHelvetica12
 *       -adobe-helvetica-medium-r-normal--12-120-75-75-p-67-iso8859-1
 * 5. fgFontHelvetica18
 *       -adobe-helvetica-medium-r-normal--18-180-75-75-p-98-iso8859-1
 * 6. fgFontTimesRoman10
 *       -adobe-times-medium-r-normal--10-100-75-75-p-54-iso8859-1
 * 7. fgFontTimesRoman24
 *       -adobe-times-medium-r-normal--24-240-75-75-p-124-iso8859-1
 */

namespace
{
    // The bitmap font structure
    struct Font
    {
        char*           name;         // The source font name
        int             quantity;     // Number of chars in font
        int             height;       // Height of the characters
        const GLubyte** characters;   // The characters mapping
        float           xorig, yorig; // Relative origin of the character
    };

    const GLubyte Fixed8x13_Character_000[] = {  8,  0,  0,  0,170,  0,130,  0,130,  0,130,  0,170,  0,  0};
    const GLubyte Fixed8x13_Character_001[] = {  8,  0,  0,  0,  0, 16, 56,124,254,124, 56, 16,  0,  0,  0};
    const GLubyte Fixed8x13_Character_002[] = {  8,  0,170, 85,170, 85,170, 85,170, 85,170, 85,170, 85,170};
    const GLubyte Fixed8x13_Character_003[] = {  8,  0,  0,  0,  4,  4,  4,  4,174,160,224,160,160,  0,  0};
    const GLubyte Fixed8x13_Character_004[] = {  8,  0,  0,  0,  8,  8, 12,  8,142,128,192,128,224,  0,  0};
    const GLubyte Fixed8x13_Character_005[] = {  8,  0,  0,  0, 10, 10, 12, 10,108,128,128,128, 96,  0,  0};
    const GLubyte Fixed8x13_Character_006[] = {  8,  0,  0,  0,  8,  8, 12,  8,238,128,128,128,128,  0,  0};
    const GLubyte Fixed8x13_Character_007[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0, 24, 36, 36, 24,  0,  0};
    const GLubyte Fixed8x13_Character_008[] = {  8,  0,  0,  0,  0,124,  0, 16, 16,124, 16, 16,  0,  0,  0};
    const GLubyte Fixed8x13_Character_009[] = {  8,  0,  0,  0, 14,  8,  8,  8,168,160,160,160,192,  0,  0};
    const GLubyte Fixed8x13_Character_010[] = {  8,  0,  0,  0,  4,  4,  4,  4, 46, 80, 80,136,136,  0,  0};
    const GLubyte Fixed8x13_Character_011[] = {  8,  0,  0,  0,  0,  0,  0,  0,240, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_012[] = {  8,  0, 16, 16, 16, 16, 16, 16,240,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_013[] = {  8,  0, 16, 16, 16, 16, 16, 16, 31,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_014[] = {  8,  0,  0,  0,  0,  0,  0,  0, 31, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_015[] = {  8,  0, 16, 16, 16, 16, 16, 16,255, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_016[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255};
    const GLubyte Fixed8x13_Character_017[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0};
    const GLubyte Fixed8x13_Character_018[] = {  8,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_019[] = {  8,  0,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_020[] = {  8,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_021[] = {  8,  0, 16, 16, 16, 16, 16, 16, 31, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_022[] = {  8,  0, 16, 16, 16, 16, 16, 16,240, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_023[] = {  8,  0,  0,  0,  0,  0,  0,  0,255, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_024[] = {  8,  0, 16, 16, 16, 16, 16, 16,255,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_025[] = {  8,  0, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16};
    const GLubyte Fixed8x13_Character_026[] = {  8,  0,  0,  0,254,  0, 14, 48,192, 48, 14,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_027[] = {  8,  0,  0,  0,254,  0,224, 24,  6, 24,224,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_028[] = {  8,  0,  0,  0, 68, 68, 68, 68, 68,254,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_029[] = {  8,  0,  0,  0, 32, 32,126, 16,  8,126,  4,  4,  0,  0,  0};
    const GLubyte Fixed8x13_Character_030[] = {  8,  0,  0,  0,220, 98, 32, 32, 32,112, 32, 34, 28,  0,  0};
    const GLubyte Fixed8x13_Character_031[] = {  8,  0,  0,  0,  0,  0,  0,  0, 24,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_032[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_033[] = {  8,  0,  0,  0, 16,  0, 16, 16, 16, 16, 16, 16, 16,  0,  0};
    const GLubyte Fixed8x13_Character_034[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0, 36, 36, 36,  0,  0};
    const GLubyte Fixed8x13_Character_035[] = {  8,  0,  0,  0,  0, 36, 36,126, 36,126, 36, 36,  0,  0,  0};
    const GLubyte Fixed8x13_Character_036[] = {  8,  0,  0,  0, 16,120, 20, 20, 56, 80, 80, 60, 16,  0,  0};
    const GLubyte Fixed8x13_Character_037[] = {  8,  0,  0,  0, 68, 42, 36, 16,  8,  8, 36, 82, 34,  0,  0};
    const GLubyte Fixed8x13_Character_038[] = {  8,  0,  0,  0, 58, 68, 74, 48, 72, 72, 48,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_039[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 48, 56,  0,  0};
    const GLubyte Fixed8x13_Character_040[] = {  8,  0,  0,  0,  4,  8,  8, 16, 16, 16,  8,  8,  4,  0,  0};
    const GLubyte Fixed8x13_Character_041[] = {  8,  0,  0,  0, 32, 16, 16,  8,  8,  8, 16, 16, 32,  0,  0};
    const GLubyte Fixed8x13_Character_042[] = {  8,  0,  0,  0,  0,  0, 36, 24,126, 24, 36,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_043[] = {  8,  0,  0,  0,  0,  0, 16, 16,124, 16, 16,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_044[] = {  8,  0,  0, 64, 48, 56,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_045[] = {  8,  0,  0,  0,  0,  0,  0,  0,126,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_046[] = {  8,  0,  0, 16, 56, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_047[] = {  8,  0,  0,  0,128,128, 64, 32, 16,  8,  4,  2,  2,  0,  0};
    const GLubyte Fixed8x13_Character_048[] = {  8,  0,  0,  0, 24, 36, 66, 66, 66, 66, 66, 36, 24,  0,  0};
    const GLubyte Fixed8x13_Character_049[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16, 80, 48, 16,  0,  0};
    const GLubyte Fixed8x13_Character_050[] = {  8,  0,  0,  0,126, 64, 32, 24,  4,  2, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_051[] = {  8,  0,  0,  0, 60, 66,  2,  2, 28,  8,  4,  2,126,  0,  0};
    const GLubyte Fixed8x13_Character_052[] = {  8,  0,  0,  0,  4,  4,126, 68, 68, 36, 20, 12,  4,  0,  0};
    const GLubyte Fixed8x13_Character_053[] = {  8,  0,  0,  0, 60, 66,  2,  2, 98, 92, 64, 64,126,  0,  0};
    const GLubyte Fixed8x13_Character_054[] = {  8,  0,  0,  0, 60, 66, 66, 98, 92, 64, 64, 32, 28,  0,  0};
    const GLubyte Fixed8x13_Character_055[] = {  8,  0,  0,  0, 32, 32, 16, 16,  8,  8,  4,  2,126,  0,  0};
    const GLubyte Fixed8x13_Character_056[] = {  8,  0,  0,  0, 60, 66, 66, 66, 60, 66, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_057[] = {  8,  0,  0,  0, 56,  4,  2,  2, 58, 70, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_058[] = {  8,  0,  0, 16, 56, 16,  0,  0, 16, 56, 16,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_059[] = {  8,  0,  0, 64, 48, 56,  0,  0, 16, 56, 16,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_060[] = {  8,  0,  0,  0,  2,  4,  8, 16, 32, 16,  8,  4,  2,  0,  0};
    const GLubyte Fixed8x13_Character_061[] = {  8,  0,  0,  0,  0,  0,126,  0,  0,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_062[] = {  8,  0,  0,  0, 64, 32, 16,  8,  4,  8, 16, 32, 64,  0,  0};
    const GLubyte Fixed8x13_Character_063[] = {  8,  0,  0,  0,  8,  0,  8,  8,  4,  2, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_064[] = {  8,  0,  0,  0, 60, 64, 74, 86, 82, 78, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_065[] = {  8,  0,  0,  0, 66, 66, 66,126, 66, 66, 66, 36, 24,  0,  0};
    const GLubyte Fixed8x13_Character_066[] = {  8,  0,  0,  0,252, 66, 66, 66,124, 66, 66, 66,252,  0,  0};
    const GLubyte Fixed8x13_Character_067[] = {  8,  0,  0,  0, 60, 66, 64, 64, 64, 64, 64, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_068[] = {  8,  0,  0,  0,252, 66, 66, 66, 66, 66, 66, 66,252,  0,  0};
    const GLubyte Fixed8x13_Character_069[] = {  8,  0,  0,  0,126, 64, 64, 64,120, 64, 64, 64,126,  0,  0};
    const GLubyte Fixed8x13_Character_070[] = {  8,  0,  0,  0, 64, 64, 64, 64,120, 64, 64, 64,126,  0,  0};
    const GLubyte Fixed8x13_Character_071[] = {  8,  0,  0,  0, 58, 70, 66, 78, 64, 64, 64, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_072[] = {  8,  0,  0,  0, 66, 66, 66, 66,126, 66, 66, 66, 66,  0,  0};
    const GLubyte Fixed8x13_Character_073[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16, 16, 16,124,  0,  0};
    const GLubyte Fixed8x13_Character_074[] = {  8,  0,  0,  0, 56, 68,  4,  4,  4,  4,  4,  4, 31,  0,  0};
    const GLubyte Fixed8x13_Character_075[] = {  8,  0,  0,  0, 66, 68, 72, 80, 96, 80, 72, 68, 66,  0,  0};
    const GLubyte Fixed8x13_Character_076[] = {  8,  0,  0,  0,126, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0};
    const GLubyte Fixed8x13_Character_077[] = {  8,  0,  0,  0,130,130,130,146,146,170,198,130,130,  0,  0};
    const GLubyte Fixed8x13_Character_078[] = {  8,  0,  0,  0, 66, 66, 66, 70, 74, 82, 98, 66, 66,  0,  0};
    const GLubyte Fixed8x13_Character_079[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_080[] = {  8,  0,  0,  0, 64, 64, 64, 64,124, 66, 66, 66,124,  0,  0};
    const GLubyte Fixed8x13_Character_081[] = {  8,  0,  0,  2, 60, 74, 82, 66, 66, 66, 66, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_082[] = {  8,  0,  0,  0, 66, 68, 72, 80,124, 66, 66, 66,124,  0,  0};
    const GLubyte Fixed8x13_Character_083[] = {  8,  0,  0,  0, 60, 66,  2,  2, 60, 64, 64, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_084[] = {  8,  0,  0,  0, 16, 16, 16, 16, 16, 16, 16, 16,254,  0,  0};
    const GLubyte Fixed8x13_Character_085[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 66,  0,  0};
    const GLubyte Fixed8x13_Character_086[] = {  8,  0,  0,  0, 16, 40, 40, 40, 68, 68, 68,130,130,  0,  0};
    const GLubyte Fixed8x13_Character_087[] = {  8,  0,  0,  0, 68,170,146,146,146,130,130,130,130,  0,  0};
    const GLubyte Fixed8x13_Character_088[] = {  8,  0,  0,  0,130,130, 68, 40, 16, 40, 68,130,130,  0,  0};
    const GLubyte Fixed8x13_Character_089[] = {  8,  0,  0,  0, 16, 16, 16, 16, 16, 40, 68,130,130,  0,  0};
    const GLubyte Fixed8x13_Character_090[] = {  8,  0,  0,  0,126, 64, 64, 32, 16,  8,  4,  2,126,  0,  0};
    const GLubyte Fixed8x13_Character_091[] = {  8,  0,  0,  0, 60, 32, 32, 32, 32, 32, 32, 32, 60,  0,  0};
    const GLubyte Fixed8x13_Character_092[] = {  8,  0,  0,  0,  2,  2,  4,  8, 16, 32, 64,128,128,  0,  0};
    const GLubyte Fixed8x13_Character_093[] = {  8,  0,  0,  0,120,  8,  8,  8,  8,  8,  8,  8,120,  0,  0};
    const GLubyte Fixed8x13_Character_094[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0, 68, 40, 16,  0,  0};
    const GLubyte Fixed8x13_Character_095[] = {  8,  0,  0,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_096[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4, 24, 56,  0,  0};
    const GLubyte Fixed8x13_Character_097[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_098[] = {  8,  0,  0,  0, 92, 98, 66, 66, 98, 92, 64, 64, 64,  0,  0};
    const GLubyte Fixed8x13_Character_099[] = {  8,  0,  0,  0, 60, 66, 64, 64, 66, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_100[] = {  8,  0,  0,  0, 58, 70, 66, 66, 70, 58,  2,  2,  2,  0,  0};
    const GLubyte Fixed8x13_Character_101[] = {  8,  0,  0,  0, 60, 66, 64,126, 66, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_102[] = {  8,  0,  0,  0, 32, 32, 32, 32,124, 32, 32, 34, 28,  0,  0};
    const GLubyte Fixed8x13_Character_103[] = {  8,  0, 60, 66, 60, 64, 56, 68, 68, 58,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_104[] = {  8,  0,  0,  0, 66, 66, 66, 66, 98, 92, 64, 64, 64,  0,  0};
    const GLubyte Fixed8x13_Character_105[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 48,  0, 16,  0,  0,  0};
    const GLubyte Fixed8x13_Character_106[] = {  8,  0, 56, 68, 68,  4,  4,  4,  4, 12,  0,  4,  0,  0,  0};
    const GLubyte Fixed8x13_Character_107[] = {  8,  0,  0,  0, 66, 68, 72,112, 72, 68, 64, 64, 64,  0,  0};
    const GLubyte Fixed8x13_Character_108[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16, 16, 16, 48,  0,  0};
    const GLubyte Fixed8x13_Character_109[] = {  8,  0,  0,  0,130,146,146,146,146,236,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_110[] = {  8,  0,  0,  0, 66, 66, 66, 66, 98, 92,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_111[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_112[] = {  8,  0, 64, 64, 64, 92, 98, 66, 98, 92,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_113[] = {  8,  0,  2,  2,  2, 58, 70, 66, 70, 58,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_114[] = {  8,  0,  0,  0, 32, 32, 32, 32, 34, 92,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_115[] = {  8,  0,  0,  0, 60, 66, 12, 48, 66, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_116[] = {  8,  0,  0,  0, 28, 34, 32, 32, 32,124, 32, 32,  0,  0,  0};
    const GLubyte Fixed8x13_Character_117[] = {  8,  0,  0,  0, 58, 68, 68, 68, 68, 68,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_118[] = {  8,  0,  0,  0, 16, 40, 40, 68, 68, 68,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_119[] = {  8,  0,  0,  0, 68,170,146,146,130,130,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_120[] = {  8,  0,  0,  0, 66, 36, 24, 24, 36, 66,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_121[] = {  8,  0, 60, 66,  2, 58, 70, 66, 66, 66,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_122[] = {  8,  0,  0,  0,126, 32, 16,  8,  4,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_123[] = {  8,  0,  0,  0, 14, 16, 16,  8, 48,  8, 16, 16, 14,  0,  0};
    const GLubyte Fixed8x13_Character_124[] = {  8,  0,  0,  0, 16, 16, 16, 16, 16, 16, 16, 16, 16,  0,  0};
    const GLubyte Fixed8x13_Character_125[] = {  8,  0,  0,  0,112,  8,  8, 16, 12, 16,  8,  8,112,  0,  0};
    const GLubyte Fixed8x13_Character_126[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0, 72, 84, 36,  0,  0};
    const GLubyte Fixed8x13_Character_127[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_128[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_129[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_130[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_131[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_132[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_133[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_134[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_135[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_136[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_137[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_138[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_139[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_140[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_141[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_142[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_143[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_144[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_145[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_146[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_147[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_148[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_149[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_150[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_151[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_152[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_153[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_154[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_155[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_156[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_157[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_158[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_159[] = {  9,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_160[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_161[] = {  8,  0,  0,  0, 16, 16, 16, 16, 16, 16, 16,  0, 16,  0,  0};
    const GLubyte Fixed8x13_Character_162[] = {  8,  0,  0,  0,  0, 16, 56, 84, 80, 80, 84, 56, 16,  0,  0};
    const GLubyte Fixed8x13_Character_163[] = {  8,  0,  0,  0,220, 98, 32, 32, 32,112, 32, 34, 28,  0,  0};
    const GLubyte Fixed8x13_Character_164[] = {  8,  0,  0,  0,  0, 66, 60, 36, 36, 60, 66,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_165[] = {  8,  0,  0,  0, 16, 16,124, 16,124, 40, 68,130,130,  0,  0};
    const GLubyte Fixed8x13_Character_166[] = {  8,  0,  0,  0, 16, 16, 16, 16,  0, 16, 16, 16, 16,  0,  0};
    const GLubyte Fixed8x13_Character_167[] = {  8,  0,  0,  0, 24, 36,  4, 24, 36, 36, 24, 32, 36, 24,  0};
    const GLubyte Fixed8x13_Character_168[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,108,  0,  0};
    const GLubyte Fixed8x13_Character_169[] = {  8,  0,  0,  0,  0, 56, 68,146,170,162,170,146, 68, 56,  0};
    const GLubyte Fixed8x13_Character_170[] = {  8,  0,  0,  0,  0,  0,124,  0, 60, 68, 60,  4, 56,  0,  0};
    const GLubyte Fixed8x13_Character_171[] = {  8,  0,  0,  0,  0, 18, 36, 72,144, 72, 36, 18,  0,  0,  0};
    const GLubyte Fixed8x13_Character_172[] = {  8,  0,  0,  0,  0,  2,  2,  2,126,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_173[] = {  8,  0,  0,  0,  0,  0,  0,  0, 60,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_174[] = {  8,  0,  0,  0,  0, 56, 68,170,178,170,170,146, 68, 56,  0};
    const GLubyte Fixed8x13_Character_175[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0,  0};
    const GLubyte Fixed8x13_Character_176[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0, 24, 36, 36, 24,  0,  0};
    const GLubyte Fixed8x13_Character_177[] = {  8,  0,  0,  0,  0,124,  0, 16, 16,124, 16, 16,  0,  0,  0};
    const GLubyte Fixed8x13_Character_178[] = {  8,  0,  0,  0,  0,  0,  0,  0,120, 64, 48,  8, 72, 48,  0};
    const GLubyte Fixed8x13_Character_179[] = {  8,  0,  0,  0,  0,  0,  0,  0, 48, 72,  8, 16, 72, 48,  0};
    const GLubyte Fixed8x13_Character_180[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_181[] = {  8,  0,  0, 64, 90,102, 66, 66, 66, 66,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_182[] = {  8,  0,  0,  0, 20, 20, 20, 20, 52,116,116,116, 62,  0,  0};
    const GLubyte Fixed8x13_Character_183[] = {  8,  0,  0,  0,  0,  0,  0,  0, 24,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_184[] = {  8,  0, 24,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_185[] = {  8,  0,  0,  0,  0,  0,  0,  0,112, 32, 32, 32, 96, 32,  0};
    const GLubyte Fixed8x13_Character_186[] = {  8,  0,  0,  0,  0,  0,  0,120,  0, 48, 72, 72, 48,  0,  0};
    const GLubyte Fixed8x13_Character_187[] = {  8,  0,  0,  0,  0,144, 72, 36, 18, 36, 72,144,  0,  0,  0};
    const GLubyte Fixed8x13_Character_188[] = {  8,  0,  0,  0,  6, 26, 18, 10,230, 66, 64, 64,192, 64,  0};
    const GLubyte Fixed8x13_Character_189[] = {  8,  0,  0,  0, 30, 16, 12,  2,242, 76, 64, 64,192, 64,  0};
    const GLubyte Fixed8x13_Character_190[] = {  8,  0,  0,  0,  6, 26, 18, 10,102,146, 16, 32,144, 96,  0};
    const GLubyte Fixed8x13_Character_191[] = {  8,  0,  0,  0, 60, 66, 66, 64, 32, 16, 16,  0, 16,  0,  0};
    const GLubyte Fixed8x13_Character_192[] = {  8,  0,  0,  0, 66, 66,126, 66, 66, 36, 24,  0,  8, 16,  0};
    const GLubyte Fixed8x13_Character_193[] = {  8,  0,  0,  0, 66, 66,126, 66, 66, 36, 24,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_194[] = {  8,  0,  0,  0, 66, 66,126, 66, 66, 36, 24,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_195[] = {  8,  0,  0,  0, 66, 66,126, 66, 66, 36, 24,  0, 76, 50,  0};
    const GLubyte Fixed8x13_Character_196[] = {  8,  0,  0,  0, 66, 66,126, 66, 66, 36, 24,  0, 36, 36,  0};
    const GLubyte Fixed8x13_Character_197[] = {  8,  0,  0,  0, 66, 66,126, 66, 66, 36, 24, 24, 36, 24,  0};
    const GLubyte Fixed8x13_Character_198[] = {  8,  0,  0,  0,158,144,144,240,156,144,144,144,110,  0,  0};
    const GLubyte Fixed8x13_Character_199[] = {  8,  0, 16,  8, 60, 66, 64, 64, 64, 64, 64, 66, 60,  0,  0};
    const GLubyte Fixed8x13_Character_200[] = {  8,  0,  0,  0,126, 64, 64,120, 64, 64,126,  0,  8, 16,  0};
    const GLubyte Fixed8x13_Character_201[] = {  8,  0,  0,  0,126, 64, 64,120, 64, 64,126,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_202[] = {  8,  0,  0,  0,126, 64, 64,120, 64, 64,126,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_203[] = {  8,  0,  0,  0,126, 64, 64,120, 64, 64,126,  0, 36, 36,  0};
    const GLubyte Fixed8x13_Character_204[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16,124,  0, 16, 32,  0};
    const GLubyte Fixed8x13_Character_205[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16,124,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_206[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16,124,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_207[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 16,124,  0, 40, 40,  0};
    const GLubyte Fixed8x13_Character_208[] = {  8,  0,  0,  0,120, 68, 66, 66,226, 66, 66, 68,120,  0,  0};
    const GLubyte Fixed8x13_Character_209[] = {  8,  0,  0,  0,130,134,138,146,162,194,130,  0,152,100,  0};
    const GLubyte Fixed8x13_Character_210[] = {  8,  0,  0,  0,124,130,130,130,130,130,124,  0, 16, 32,  0};
    const GLubyte Fixed8x13_Character_211[] = {  8,  0,  0,  0,124,130,130,130,130,130,124,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_212[] = {  8,  0,  0,  0,124,130,130,130,130,130,124,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_213[] = {  8,  0,  0,  0,124,130,130,130,130,130,124,  0,152,100,  0};
    const GLubyte Fixed8x13_Character_214[] = {  8,  0,  0,  0,124,130,130,130,130,130,124,  0, 40, 40,  0};
    const GLubyte Fixed8x13_Character_215[] = {  8,  0,  0,  0,  0, 66, 36, 24, 24, 36, 66,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_216[] = {  8,  0,  0, 64, 60, 98, 82, 82, 82, 74, 74, 70, 60,  2,  0};
    const GLubyte Fixed8x13_Character_217[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66,  0,  8, 16,  0};
    const GLubyte Fixed8x13_Character_218[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_219[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_220[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66,  0, 36, 36,  0};
    const GLubyte Fixed8x13_Character_221[] = {  8,  0,  0,  0, 16, 16, 16, 16, 40, 68, 68,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_222[] = {  8,  0,  0,  0, 64, 64, 64,124, 66, 66, 66,124, 64,  0,  0};
    const GLubyte Fixed8x13_Character_223[] = {  8,  0,  0,  0, 92, 66, 66, 76, 80, 72, 68, 68, 56,  0,  0};
    const GLubyte Fixed8x13_Character_224[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0,  0,  8, 16,  0};
    const GLubyte Fixed8x13_Character_225[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0,  0,  8,  4,  0};
    const GLubyte Fixed8x13_Character_226[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_227[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0,  0, 76, 50,  0};
    const GLubyte Fixed8x13_Character_228[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0,  0, 36, 36,  0};
    const GLubyte Fixed8x13_Character_229[] = {  8,  0,  0,  0, 58, 70, 66, 62,  2, 60,  0, 24, 36, 24,  0};
    const GLubyte Fixed8x13_Character_230[] = {  8,  0,  0,  0,108,146,144,124, 18,108,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_231[] = {  8,  0, 16,  8, 60, 66, 64, 64, 66, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_232[] = {  8,  0,  0,  0, 60, 66, 64,126, 66, 60,  0,  0,  8, 16,  0};
    const GLubyte Fixed8x13_Character_233[] = {  8,  0,  0,  0, 60, 66, 64,126, 66, 60,  0,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_234[] = {  8,  0,  0,  0, 60, 66, 64,126, 66, 60,  0,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_235[] = {  8,  0,  0,  0, 60, 66, 64,126, 66, 60,  0,  0, 36, 36,  0};
    const GLubyte Fixed8x13_Character_236[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 48,  0,  0, 16, 32,  0};
    const GLubyte Fixed8x13_Character_237[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 48,  0,  0, 32, 16,  0};
    const GLubyte Fixed8x13_Character_238[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 48,  0,  0, 72, 48,  0};
    const GLubyte Fixed8x13_Character_239[] = {  8,  0,  0,  0,124, 16, 16, 16, 16, 48,  0,  0, 40, 40,  0};
    const GLubyte Fixed8x13_Character_240[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  4, 40, 24, 36,  0};
    const GLubyte Fixed8x13_Character_241[] = {  8,  0,  0,  0, 66, 66, 66, 66, 98, 92,  0,  0, 76, 50,  0};
    const GLubyte Fixed8x13_Character_242[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  0,  0, 16, 32,  0};
    const GLubyte Fixed8x13_Character_243[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  0,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_244[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  0,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_245[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  0,  0, 76, 50,  0};
    const GLubyte Fixed8x13_Character_246[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 60,  0,  0, 36, 36,  0};
    const GLubyte Fixed8x13_Character_247[] = {  8,  0,  0,  0,  0, 16, 16,  0,124,  0, 16, 16,  0,  0,  0};
    const GLubyte Fixed8x13_Character_248[] = {  8,  0,  0, 64, 60, 98, 82, 74, 70, 60,  2,  0,  0,  0,  0};
    const GLubyte Fixed8x13_Character_249[] = {  8,  0,  0,  0, 58, 68, 68, 68, 68, 68,  0,  0, 16, 32,  0};
    const GLubyte Fixed8x13_Character_250[] = {  8,  0,  0,  0, 58, 68, 68, 68, 68, 68,  0,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_251[] = {  8,  0,  0,  0, 58, 68, 68, 68, 68, 68,  0,  0, 36, 24,  0};
    const GLubyte Fixed8x13_Character_252[] = {  8,  0,  0,  0, 58, 68, 68, 68, 68, 68,  0,  0, 40, 40,  0};
    const GLubyte Fixed8x13_Character_253[] = {  8,  0, 60, 66,  2, 58, 70, 66, 66, 66,  0,  0, 16,  8,  0};
    const GLubyte Fixed8x13_Character_254[] = {  8,  0, 64, 64, 92, 98, 66, 66, 98, 92, 64, 64,  0,  0,  0};
    const GLubyte Fixed8x13_Character_255[] = {  8,  0, 60, 66,  2, 58, 70, 66, 66, 66,  0,  0, 36, 36,  0};

    /* The font characters mapping: */
    const GLubyte* Fixed8x13_Character_Map[] = {Fixed8x13_Character_000,Fixed8x13_Character_001,Fixed8x13_Character_002,Fixed8x13_Character_003,Fixed8x13_Character_004,Fixed8x13_Character_005,Fixed8x13_Character_006,Fixed8x13_Character_007,Fixed8x13_Character_008,Fixed8x13_Character_009,Fixed8x13_Character_010,Fixed8x13_Character_011,Fixed8x13_Character_012,Fixed8x13_Character_013,Fixed8x13_Character_014,Fixed8x13_Character_015,
                                                Fixed8x13_Character_016,Fixed8x13_Character_017,Fixed8x13_Character_018,Fixed8x13_Character_019,Fixed8x13_Character_020,Fixed8x13_Character_021,Fixed8x13_Character_022,Fixed8x13_Character_023,Fixed8x13_Character_024,Fixed8x13_Character_025,Fixed8x13_Character_026,Fixed8x13_Character_027,Fixed8x13_Character_028,Fixed8x13_Character_029,Fixed8x13_Character_030,Fixed8x13_Character_031,
                                                Fixed8x13_Character_032,Fixed8x13_Character_033,Fixed8x13_Character_034,Fixed8x13_Character_035,Fixed8x13_Character_036,Fixed8x13_Character_037,Fixed8x13_Character_038,Fixed8x13_Character_039,Fixed8x13_Character_040,Fixed8x13_Character_041,Fixed8x13_Character_042,Fixed8x13_Character_043,Fixed8x13_Character_044,Fixed8x13_Character_045,Fixed8x13_Character_046,Fixed8x13_Character_047,
                                                Fixed8x13_Character_048,Fixed8x13_Character_049,Fixed8x13_Character_050,Fixed8x13_Character_051,Fixed8x13_Character_052,Fixed8x13_Character_053,Fixed8x13_Character_054,Fixed8x13_Character_055,Fixed8x13_Character_056,Fixed8x13_Character_057,Fixed8x13_Character_058,Fixed8x13_Character_059,Fixed8x13_Character_060,Fixed8x13_Character_061,Fixed8x13_Character_062,Fixed8x13_Character_063,
                                                Fixed8x13_Character_064,Fixed8x13_Character_065,Fixed8x13_Character_066,Fixed8x13_Character_067,Fixed8x13_Character_068,Fixed8x13_Character_069,Fixed8x13_Character_070,Fixed8x13_Character_071,Fixed8x13_Character_072,Fixed8x13_Character_073,Fixed8x13_Character_074,Fixed8x13_Character_075,Fixed8x13_Character_076,Fixed8x13_Character_077,Fixed8x13_Character_078,Fixed8x13_Character_079,
                                                Fixed8x13_Character_080,Fixed8x13_Character_081,Fixed8x13_Character_082,Fixed8x13_Character_083,Fixed8x13_Character_084,Fixed8x13_Character_085,Fixed8x13_Character_086,Fixed8x13_Character_087,Fixed8x13_Character_088,Fixed8x13_Character_089,Fixed8x13_Character_090,Fixed8x13_Character_091,Fixed8x13_Character_092,Fixed8x13_Character_093,Fixed8x13_Character_094,Fixed8x13_Character_095,
                                                Fixed8x13_Character_096,Fixed8x13_Character_097,Fixed8x13_Character_098,Fixed8x13_Character_099,Fixed8x13_Character_100,Fixed8x13_Character_101,Fixed8x13_Character_102,Fixed8x13_Character_103,Fixed8x13_Character_104,Fixed8x13_Character_105,Fixed8x13_Character_106,Fixed8x13_Character_107,Fixed8x13_Character_108,Fixed8x13_Character_109,Fixed8x13_Character_110,Fixed8x13_Character_111,
                                                Fixed8x13_Character_112,Fixed8x13_Character_113,Fixed8x13_Character_114,Fixed8x13_Character_115,Fixed8x13_Character_116,Fixed8x13_Character_117,Fixed8x13_Character_118,Fixed8x13_Character_119,Fixed8x13_Character_120,Fixed8x13_Character_121,Fixed8x13_Character_122,Fixed8x13_Character_123,Fixed8x13_Character_124,Fixed8x13_Character_125,Fixed8x13_Character_126,Fixed8x13_Character_032,
                                                Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,
                                                Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,Fixed8x13_Character_032,
                                                Fixed8x13_Character_160,Fixed8x13_Character_161,Fixed8x13_Character_162,Fixed8x13_Character_163,Fixed8x13_Character_164,Fixed8x13_Character_165,Fixed8x13_Character_166,Fixed8x13_Character_167,Fixed8x13_Character_168,Fixed8x13_Character_169,Fixed8x13_Character_170,Fixed8x13_Character_171,Fixed8x13_Character_172,Fixed8x13_Character_173,Fixed8x13_Character_174,Fixed8x13_Character_175,
                                                Fixed8x13_Character_176,Fixed8x13_Character_177,Fixed8x13_Character_178,Fixed8x13_Character_179,Fixed8x13_Character_180,Fixed8x13_Character_181,Fixed8x13_Character_182,Fixed8x13_Character_183,Fixed8x13_Character_184,Fixed8x13_Character_185,Fixed8x13_Character_186,Fixed8x13_Character_187,Fixed8x13_Character_188,Fixed8x13_Character_189,Fixed8x13_Character_190,Fixed8x13_Character_191,
                                                Fixed8x13_Character_192,Fixed8x13_Character_193,Fixed8x13_Character_194,Fixed8x13_Character_195,Fixed8x13_Character_196,Fixed8x13_Character_197,Fixed8x13_Character_198,Fixed8x13_Character_199,Fixed8x13_Character_200,Fixed8x13_Character_201,Fixed8x13_Character_202,Fixed8x13_Character_203,Fixed8x13_Character_204,Fixed8x13_Character_205,Fixed8x13_Character_206,Fixed8x13_Character_207,
                                                Fixed8x13_Character_208,Fixed8x13_Character_209,Fixed8x13_Character_210,Fixed8x13_Character_211,Fixed8x13_Character_212,Fixed8x13_Character_213,Fixed8x13_Character_214,Fixed8x13_Character_215,Fixed8x13_Character_216,Fixed8x13_Character_217,Fixed8x13_Character_218,Fixed8x13_Character_219,Fixed8x13_Character_220,Fixed8x13_Character_221,Fixed8x13_Character_222,Fixed8x13_Character_223,
                                                Fixed8x13_Character_224,Fixed8x13_Character_225,Fixed8x13_Character_226,Fixed8x13_Character_227,Fixed8x13_Character_228,Fixed8x13_Character_229,Fixed8x13_Character_230,Fixed8x13_Character_231,Fixed8x13_Character_232,Fixed8x13_Character_233,Fixed8x13_Character_234,Fixed8x13_Character_235,Fixed8x13_Character_236,Fixed8x13_Character_237,Fixed8x13_Character_238,Fixed8x13_Character_239,
                                                Fixed8x13_Character_240,Fixed8x13_Character_241,Fixed8x13_Character_242,Fixed8x13_Character_243,Fixed8x13_Character_244,Fixed8x13_Character_245,Fixed8x13_Character_246,Fixed8x13_Character_247,Fixed8x13_Character_248,Fixed8x13_Character_249,Fixed8x13_Character_250,Fixed8x13_Character_251,Fixed8x13_Character_252,Fixed8x13_Character_253,Fixed8x13_Character_254,Fixed8x13_Character_255,NULL};

    /* The font structure: */
    const Font fontFixed8x13 = { "-misc-fixed-medium-r-normal--13-120-75-75-C-80-iso8859-1", 256, 14, Fixed8x13_Character_Map, 0, 3 };

    const GLubyte Fixed9x15_Character_000[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_001[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0, 28,  0, 62,  0,127,  0,255,128,127,  0, 62,  0, 28,  0,  8,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_002[] = {  9,  0,  0,170,128, 85,  0,170,128, 85,  0,170,128, 85,  0,170,128, 85,  0,170,128, 85,  0,170,128, 85,  0,170,128, 85,  0,170,128};
    const GLubyte Fixed9x15_Character_003[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  4,  0,  4,  0,  4,  0, 31,  0,  0,  0, 72,  0, 72,  0,120,  0, 72,  0, 72,  0,  0,  0};
    const GLubyte Fixed9x15_Character_004[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0, 14,  0, 72,  0, 79,  0, 64,  0,112,  0, 64,  0,120,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_005[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  9,  0,  9,  0, 14,  0,  9,  0, 14,  0,  0,  0, 56,  0, 64,  0, 64,  0, 64,  0, 56,  0,  0,  0};
    const GLubyte Fixed9x15_Character_006[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0, 14,  0,  8,  0, 15,  0,  0,  0,120,  0, 64,  0, 64,  0, 64,  0, 64,  0,  0,  0};
    const GLubyte Fixed9x15_Character_007[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 18,  0, 18,  0, 12,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_008[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  0,  0,  8,  0,  8,  0,  8,  0,127,  0,  8,  0,  8,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_009[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0,  8,  0,  8,  0,  8,  0,  8,  0,  0,  0, 68,  0, 76,  0, 84,  0,100,  0, 68,  0,  0,  0};
    const GLubyte Fixed9x15_Character_010[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  4,  0,  4,  0,  4,  0, 31,  0,  0,  0, 16,  0, 40,  0, 40,  0, 68,  0, 68,  0,  0,  0};
    const GLubyte Fixed9x15_Character_011[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_012[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_013[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 15,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_014[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,128,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_015[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,255,128,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_016[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,128};
    const GLubyte Fixed9x15_Character_017[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,128,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_018[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_019[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,255,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_020[] = {  9,  0,  0,255,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_021[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 15,128,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_022[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,248,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_023[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,128,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_024[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,255,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_025[] = {  9,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0};
    const GLubyte Fixed9x15_Character_026[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  0,  0,  3,  0, 28,  0, 96,  0, 28,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_027[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  0,  0, 96,  0, 28,  0,  3,  0, 28,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_028[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 34,  0, 34,  0, 34,  0, 34,  0, 34,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_029[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0, 16,  0,127,  0,  8,  0,127,  0,  4,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_030[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 46,  0, 81,  0, 48,  0, 16,  0, 16,  0,124,  0, 16,  0, 16,  0, 17,  0, 14,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_031[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_032[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_033[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_034[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 18,  0, 18,  0, 18,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_035[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 36,  0, 36,  0,126,  0, 36,  0, 36,  0,126,  0, 36,  0, 36,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_036[] = {  9,  0,  0,  0,  0,  0,  0,  8,  0, 62,  0, 73,  0,  9,  0,  9,  0, 10,  0, 28,  0, 40,  0, 72,  0, 73,  0, 62,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_037[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 66,  0, 37,  0, 37,  0, 18,  0,  8,  0,  8,  0, 36,  0, 82,  0, 82,  0, 33,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_038[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 49,  0, 74,  0, 68,  0, 74,  0, 49,  0, 48,  0, 72,  0, 72,  0, 72,  0, 48,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_039[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  8,  0,  4,  0,  6,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_040[] = {  9,  0,  0,  0,  0,  0,  0,  4,  0,  8,  0,  8,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0,  8,  0,  8,  0,  4,  0,  0,  0};
    const GLubyte Fixed9x15_Character_041[] = {  9,  0,  0,  0,  0,  0,  0, 16,  0,  8,  0,  8,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  8,  0,  8,  0, 16,  0,  0,  0};
    const GLubyte Fixed9x15_Character_042[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0, 73,  0, 42,  0, 28,  0, 42,  0, 73,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_043[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,127,  0,  8,  0,  8,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_044[] = {  9,  0,  0,  8,  0,  4,  0,  4,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_045[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_046[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_047[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0, 32,  0, 32,  0, 16,  0,  8,  0,  8,  0,  4,  0,  2,  0,  2,  0,  1,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_048[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_049[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 72,  0, 40,  0, 24,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_050[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 64,  0, 32,  0, 16,  0,  8,  0,  4,  0,  2,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_051[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0,  1,  0,  1,  0,  1,  0, 14,  0,  4,  0,  2,  0,  1,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_052[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  2,  0,  2,  0,127,  0, 66,  0, 34,  0, 18,  0, 10,  0,  6,  0,  2,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_053[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0,  1,  0,  1,  0,  1,  0, 97,  0, 94,  0, 64,  0, 64,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_054[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 97,  0, 94,  0, 64,  0, 64,  0, 32,  0, 30,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_055[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0, 32,  0, 16,  0, 16,  0,  8,  0,  4,  0,  2,  0,  1,  0,  1,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_056[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 65,  0, 65,  0, 34,  0, 28,  0, 34,  0, 65,  0, 34,  0, 28,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_057[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,  2,  0,  1,  0,  1,  0, 61,  0, 67,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_058[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_059[] = {  9,  0,  0,  8,  0,  4,  0,  4,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_060[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  4,  0,  8,  0, 16,  0, 32,  0, 32,  0, 16,  0,  8,  0,  4,  0,  2,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_061[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  0,  0,  0,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_062[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0, 16,  0,  8,  0,  4,  0,  2,  0,  2,  0,  4,  0,  8,  0, 16,  0, 32,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_063[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  0,  0,  8,  0,  8,  0,  4,  0,  2,  0,  1,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_064[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 64,  0, 64,  0, 77,  0, 83,  0, 81,  0, 79,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_065[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 65,  0, 34,  0, 20,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_066[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,126,  0, 33,  0, 33,  0, 33,  0, 33,  0,126,  0, 33,  0, 33,  0, 33,  0,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_067[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_068[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,126,  0, 33,  0, 33,  0, 33,  0, 33,  0, 33,  0, 33,  0, 33,  0, 33,  0,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_069[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 32,  0, 32,  0, 32,  0, 32,  0, 60,  0, 32,  0, 32,  0, 32,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_070[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0, 32,  0, 32,  0, 32,  0, 32,  0, 60,  0, 32,  0, 32,  0, 32,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_071[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 71,  0, 64,  0, 64,  0, 64,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_072[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_073[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_074[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0, 66,  0,  2,  0,  2,  0,  2,  0,  2,  0,  2,  0,  2,  0,  2,  0, 15,128,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_075[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 66,  0, 68,  0, 72,  0, 80,  0,112,  0, 72,  0, 68,  0, 66,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_076[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_077[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 73,  0, 73,  0, 85,  0, 85,  0, 99,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_078[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 67,  0, 69,  0, 73,  0, 81,  0, 97,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_079[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_080[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0,126,  0, 65,  0, 65,  0, 65,  0,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_081[] = {  9,  0,  0,  0,  0,  3,  0,  4,  0, 62,  0, 73,  0, 81,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_082[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 66,  0, 68,  0, 72,  0,126,  0, 65,  0, 65,  0, 65,  0,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_083[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0,  1,  0,  6,  0, 56,  0, 64,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_084[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_085[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_086[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0, 20,  0, 20,  0, 20,  0, 34,  0, 34,  0, 34,  0, 65,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_087[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 85,  0, 73,  0, 73,  0, 73,  0, 73,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_088[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 34,  0, 20,  0,  8,  0,  8,  0, 20,  0, 34,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_089[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 20,  0, 34,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_090[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 64,  0, 64,  0, 32,  0, 16,  0,  8,  0,  4,  0,  2,  0,  1,  0,127,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_091[] = {  9,  0,  0,  0,  0,  0,  0, 30,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 16,  0, 30,  0,  0,  0};
    const GLubyte Fixed9x15_Character_092[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  2,  0,  2,  0,  4,  0,  8,  0,  8,  0, 16,  0, 32,  0, 32,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_093[] = {  9,  0,  0,  0,  0,  0,  0, 60,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0,  4,  0, 60,  0,  0,  0};
    const GLubyte Fixed9x15_Character_094[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 34,  0, 20,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_095[] = {  9,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_096[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  8,  0, 16,  0, 48,  0,  0,  0};
    const GLubyte Fixed9x15_Character_097[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_098[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 94,  0, 97,  0, 65,  0, 65,  0, 65,  0, 97,  0, 94,  0, 64,  0, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_099[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 64,  0, 64,  0, 64,  0, 65,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_100[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 65,  0, 65,  0, 67,  0, 61,  0,  1,  0,  1,  0,  1,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_101[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 64,  0, 64,  0,127,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_102[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0, 16,  0, 16,  0, 16,  0,124,  0, 16,  0, 16,  0, 17,  0, 17,  0, 14,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_103[] = {  9,  0,  0, 62,  0, 65,  0, 65,  0, 62,  0, 64,  0, 60,  0, 66,  0, 66,  0, 66,  0, 61,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_104[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 97,  0, 94,  0, 64,  0, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_105[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 56,  0,  0,  0,  0,  0, 24,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_106[] = {  9,  0,  0, 60,  0, 66,  0, 66,  0, 66,  0,  2,  0,  2,  0,  2,  0,  2,  0,  2,  0, 14,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_107[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 70,  0, 88,  0, 96,  0, 88,  0, 70,  0, 65,  0, 64,  0, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_108[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 56,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_109[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 73,  0, 73,  0, 73,  0, 73,  0, 73,  0,118,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_110[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 97,  0, 94,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_111[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_112[] = {  9,  0,  0, 64,  0, 64,  0, 64,  0, 94,  0, 97,  0, 65,  0, 65,  0, 65,  0, 97,  0, 94,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_113[] = {  9,  0,  0,  1,  0,  1,  0,  1,  0, 61,  0, 67,  0, 65,  0, 65,  0, 65,  0, 67,  0, 61,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_114[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0, 32,  0, 32,  0, 32,  0, 33,  0, 49,  0, 78,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_115[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0,  1,  0, 62,  0, 64,  0, 65,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_116[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 14,  0, 17,  0, 16,  0, 16,  0, 16,  0, 16,  0,126,  0, 16,  0, 16,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_117[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_118[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0, 20,  0, 20,  0, 34,  0, 34,  0, 65,  0, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_119[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 85,  0, 73,  0, 73,  0, 73,  0, 65,  0, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_120[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 34,  0, 20,  0,  8,  0, 20,  0, 34,  0, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_121[] = {  9,  0,  0, 60,  0, 66,  0,  2,  0, 58,  0, 70,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_122[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 32,  0, 16,  0,  8,  0,  4,  0,  2,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_123[] = {  9,  0,  0,  0,  0,  0,  0,  7,  0,  8,  0,  8,  0,  8,  0,  4,  0, 24,  0, 24,  0,  4,  0,  8,  0,  8,  0,  8,  0,  7,  0,  0,  0};
    const GLubyte Fixed9x15_Character_124[] = {  9,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_125[] = {  9,  0,  0,  0,  0,  0,  0,112,  0,  8,  0,  8,  0,  8,  0, 16,  0, 12,  0, 12,  0, 16,  0,  8,  0,  8,  0,  8,  0,112,  0,  0,  0};
    const GLubyte Fixed9x15_Character_126[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 70,  0, 73,  0, 49,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_127[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_128[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_129[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_130[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_131[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_132[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_133[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_134[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_135[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_136[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_137[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_138[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_139[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_140[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_141[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_142[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_143[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_144[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_145[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_146[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_147[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_148[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_149[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_150[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_151[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_152[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_153[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_154[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_155[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_156[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_157[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_158[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_159[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 91,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0, 65,  0, 64,  0,  1,  0,109,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_160[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_161[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  0,  0,  0,  0,  8,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_162[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0, 60,  0, 82,  0, 80,  0, 72,  0, 74,  0, 60,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_163[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 46,  0, 81,  0, 48,  0, 16,  0, 16,  0,124,  0, 16,  0, 16,  0, 17,  0, 14,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_164[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 62,  0, 34,  0, 34,  0, 62,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_165[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0, 62,  0,  8,  0, 62,  0, 20,  0, 34,  0, 65,  0, 65,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_166[] = {  9,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_167[] = {  9,  0,  0,  0,  0,  0,  0, 24,  0, 36,  0,  4,  0, 24,  0, 36,  0, 36,  0, 36,  0, 24,  0, 32,  0, 36,  0, 24,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_168[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 34,  0,  0,  0};
    const GLubyte Fixed9x15_Character_169[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0, 66,  0,153,  0,165,  0,161,  0,165,  0,153,  0, 66,  0, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_170[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  0,  0,  0, 60,  0, 72,  0, 56,  0, 72,  0, 48,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_171[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,  0, 18,  0, 36,  0, 72,  0, 72,  0, 36,  0, 18,  0,  9,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_172[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  2,  0,  2,  0,126,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_173[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_174[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0, 66,  0,165,  0,169,  0,185,  0,165,  0,185,  0, 66,  0, 60,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_175[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_176[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 18,  0, 18,  0, 12,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_177[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,  0,  0,  8,  0,  8,  0,  8,  0,127,  0,  8,  0,  8,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_178[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,  0, 64,  0, 48,  0,  8,  0, 72,  0, 48,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_179[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48,  0, 72,  0,  8,  0, 16,  0, 72,  0, 48,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_180[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  8,  0,  4,  0,  0,  0};
    const GLubyte Fixed9x15_Character_181[] = {  9,  0,  0,  0,  0, 64,  0, 64,  0, 93,  0, 99,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_182[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  5,  0,  5,  0,  5,  0,  5,  0,  5,  0, 61,  0, 69,  0, 69,  0, 69,  0, 63,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_183[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_184[] = {  9,  0,  0, 24,  0, 36,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_185[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,112,  0, 32,  0, 32,  0, 32,  0, 96,  0, 32,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_186[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  0,  0,  0, 56,  0, 68,  0, 68,  0, 56,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_187[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 72,  0, 36,  0, 18,  0,  9,  0,  9,  0, 18,  0, 36,  0, 72,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_188[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0, 13,  0,  9,  0,  5,  0,115,  0, 33,  0, 32,  0, 32,  0, 96,  0, 32,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_189[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0,  8,  0,  6,  0,  1,  0,121,  0, 38,  0, 32,  0, 32,  0, 96,  0, 32,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_190[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0, 13,  0,  9,  0,  5,  0, 51,  0, 73,  0,  8,  0, 16,  0, 72,  0, 48,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_191[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 64,  0, 32,  0, 16,  0,  8,  0,  8,  0,  0,  0,  8,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_192[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0,  8,  0, 16,  0, 32,  0};
    const GLubyte Fixed9x15_Character_193[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0,  8,  0,  4,  0,  2,  0};
    const GLubyte Fixed9x15_Character_194[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0, 34,  0, 20,  0,  8,  0};
    const GLubyte Fixed9x15_Character_195[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0, 78,  0, 49,  0,  0,  0};
    const GLubyte Fixed9x15_Character_196[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0, 34,  0, 34,  0,  0,  0};
    const GLubyte Fixed9x15_Character_197[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 34,  0, 20,  0, 28,  0, 34,  0, 28,  0,  0,  0};
    const GLubyte Fixed9x15_Character_198[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 79,  0, 72,  0, 72,  0, 72,  0,126,  0, 72,  0, 72,  0, 72,  0, 72,  0, 55,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_199[] = {  9,  0,  0, 24,  0, 36,  0, 12,  0, 62,  0, 65,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 65,  0, 62,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_200[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 32,  0, 32,  0, 32,  0, 60,  0, 32,  0, 32,  0,127,  0,  0,  0,  8,  0, 16,  0, 32,  0};
    const GLubyte Fixed9x15_Character_201[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 32,  0, 32,  0, 32,  0, 60,  0, 32,  0, 32,  0,127,  0,  0,  0,  8,  0,  4,  0,  2,  0};
    const GLubyte Fixed9x15_Character_202[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 32,  0, 32,  0, 32,  0, 60,  0, 32,  0, 32,  0,127,  0,  0,  0, 34,  0, 20,  0,  8,  0};
    const GLubyte Fixed9x15_Character_203[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 32,  0, 32,  0, 32,  0, 60,  0, 32,  0, 32,  0,127,  0,  0,  0, 34,  0, 34,  0,  0,  0};
    const GLubyte Fixed9x15_Character_204[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 62,  0,  0,  0,  8,  0, 16,  0, 32,  0};
    const GLubyte Fixed9x15_Character_205[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 62,  0,  0,  0,  8,  0,  4,  0,  2,  0};
    const GLubyte Fixed9x15_Character_206[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 62,  0,  0,  0, 34,  0, 20,  0,  8,  0};
    const GLubyte Fixed9x15_Character_207[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 62,  0,  0,  0, 34,  0, 34,  0,  0,  0};
    const GLubyte Fixed9x15_Character_208[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,124,  0, 33,  0, 33,  0, 33,  0, 33,  0,225,  0, 33,  0, 33,  0, 33,  0,124,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_209[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 67,  0, 69,  0, 73,  0, 73,  0, 81,  0, 97,  0, 65,  0,  0,  0, 78,  0, 49,  0,  0,  0};
    const GLubyte Fixed9x15_Character_210[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  8,  0, 16,  0, 32,  0};
    const GLubyte Fixed9x15_Character_211[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  8,  0,  4,  0,  2,  0};
    const GLubyte Fixed9x15_Character_212[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0, 34,  0, 20,  0,  8,  0};
    const GLubyte Fixed9x15_Character_213[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0, 78,  0, 49,  0,  0,  0};
    const GLubyte Fixed9x15_Character_214[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0, 34,  0, 34,  0,  0,  0};
    const GLubyte Fixed9x15_Character_215[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 34,  0, 20,  0,  8,  0, 20,  0, 34,  0, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_216[] = {  9,  0,  0,  0,  0,  0,  0, 64,  0, 62,  0, 97,  0, 81,  0, 81,  0, 73,  0, 73,  0, 69,  0, 69,  0, 67,  0, 62,  0,  1,  0,  0,  0};
    const GLubyte Fixed9x15_Character_217[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  8,  0, 16,  0, 32,  0};
    const GLubyte Fixed9x15_Character_218[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  8,  0,  4,  0,  2,  0};
    const GLubyte Fixed9x15_Character_219[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0, 34,  0, 20,  0,  8,  0};
    const GLubyte Fixed9x15_Character_220[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0, 34,  0, 34,  0,  0,  0};
    const GLubyte Fixed9x15_Character_221[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0, 20,  0, 34,  0, 65,  0, 65,  0,  0,  0,  8,  0,  4,  0,  2,  0};
    const GLubyte Fixed9x15_Character_222[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0, 64,  0, 64,  0,126,  0, 65,  0, 65,  0, 65,  0,126,  0, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_223[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 44,  0, 34,  0, 34,  0, 34,  0, 36,  0,104,  0, 36,  0, 34,  0, 34,  0, 28,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_224[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0,  4,  0,  8,  0, 16,  0,  0,  0};
    const GLubyte Fixed9x15_Character_225[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0,  8,  0,  4,  0,  2,  0,  0,  0};
    const GLubyte Fixed9x15_Character_226[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0, 34,  0, 20,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_227[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0, 38,  0, 25,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_228[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0, 34,  0, 34,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_229[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 67,  0, 65,  0, 63,  0,  1,  0,  1,  0, 62,  0,  0,  0, 12,  0, 18,  0, 12,  0,  0,  0};
    const GLubyte Fixed9x15_Character_230[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 55,  0, 73,  0, 72,  0, 62,  0,  9,  0, 73,  0, 54,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_231[] = {  9,  0,  0, 24,  0, 36,  0, 12,  0, 62,  0, 65,  0, 64,  0, 64,  0, 64,  0, 65,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_232[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 64,  0, 64,  0,127,  0, 65,  0, 65,  0, 62,  0,  0,  0,  8,  0, 16,  0, 32,  0,  0,  0};
    const GLubyte Fixed9x15_Character_233[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 64,  0, 64,  0,127,  0, 65,  0, 65,  0, 62,  0,  0,  0,  8,  0,  4,  0,  2,  0,  0,  0};
    const GLubyte Fixed9x15_Character_234[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 64,  0, 64,  0,127,  0, 65,  0, 65,  0, 62,  0,  0,  0, 34,  0, 20,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_235[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 64,  0, 64,  0,127,  0, 65,  0, 65,  0, 62,  0,  0,  0, 34,  0, 34,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_236[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 56,  0,  0,  0,  8,  0, 16,  0, 32,  0,  0,  0};
    const GLubyte Fixed9x15_Character_237[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 56,  0,  0,  0, 16,  0,  8,  0,  4,  0,  0,  0};
    const GLubyte Fixed9x15_Character_238[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 56,  0,  0,  0, 68,  0, 40,  0, 16,  0,  0,  0};
    const GLubyte Fixed9x15_Character_239[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,  8,  0,  8,  0,  8,  0,  8,  0,  8,  0, 56,  0,  0,  0, 36,  0, 36,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_240[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  4,  0, 40,  0, 24,  0, 36,  0,  0,  0};
    const GLubyte Fixed9x15_Character_241[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 97,  0, 94,  0,  0,  0, 78,  0, 49,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_242[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  8,  0, 16,  0, 32,  0,  0,  0};
    const GLubyte Fixed9x15_Character_243[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0,  8,  0,  4,  0,  2,  0,  0,  0};
    const GLubyte Fixed9x15_Character_244[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0, 34,  0, 20,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_245[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0, 78,  0, 49,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_246[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 62,  0,  0,  0, 34,  0, 34,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_247[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0, 28,  0,  8,  0,  0,  0,127,  0,  0,  0,  8,  0, 28,  0,  8,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_248[] = {  9,  0,  0,  0,  0,  0,  0, 64,  0, 62,  0, 81,  0, 81,  0, 73,  0, 69,  0, 69,  0, 62,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_249[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0,  8,  0, 16,  0, 32,  0,  0,  0};
    const GLubyte Fixed9x15_Character_250[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0,  8,  0,  4,  0,  2,  0,  0,  0};
    const GLubyte Fixed9x15_Character_251[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0, 34,  0, 20,  0,  8,  0,  0,  0};
    const GLubyte Fixed9x15_Character_252[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 61,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0, 36,  0, 36,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_253[] = {  9,  0,  0, 60,  0, 66,  0,  2,  0, 58,  0, 70,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0, 16,  0,  8,  0,  4,  0,  0,  0};
    const GLubyte Fixed9x15_Character_254[] = {  9,  0,  0, 64,  0, 64,  0, 64,  0, 94,  0, 97,  0, 65,  0, 65,  0, 97,  0, 94,  0, 64,  0, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Fixed9x15_Character_255[] = {  9,  0,  0, 60,  0, 66,  0,  2,  0, 58,  0, 70,  0, 66,  0, 66,  0, 66,  0, 66,  0, 66,  0,  0,  0, 36,  0, 36,  0,  0,  0,  0,  0};

    /* The font characters mapping: */
    const GLubyte* Fixed9x15_Character_Map[] = {Fixed9x15_Character_000,Fixed9x15_Character_001,Fixed9x15_Character_002,Fixed9x15_Character_003,Fixed9x15_Character_004,Fixed9x15_Character_005,Fixed9x15_Character_006,Fixed9x15_Character_007,Fixed9x15_Character_008,Fixed9x15_Character_009,Fixed9x15_Character_010,Fixed9x15_Character_011,Fixed9x15_Character_012,Fixed9x15_Character_013,Fixed9x15_Character_014,Fixed9x15_Character_015,
                                                Fixed9x15_Character_016,Fixed9x15_Character_017,Fixed9x15_Character_018,Fixed9x15_Character_019,Fixed9x15_Character_020,Fixed9x15_Character_021,Fixed9x15_Character_022,Fixed9x15_Character_023,Fixed9x15_Character_024,Fixed9x15_Character_025,Fixed9x15_Character_026,Fixed9x15_Character_027,Fixed9x15_Character_028,Fixed9x15_Character_029,Fixed9x15_Character_030,Fixed9x15_Character_031,
                                                Fixed9x15_Character_032,Fixed9x15_Character_033,Fixed9x15_Character_034,Fixed9x15_Character_035,Fixed9x15_Character_036,Fixed9x15_Character_037,Fixed9x15_Character_038,Fixed9x15_Character_039,Fixed9x15_Character_040,Fixed9x15_Character_041,Fixed9x15_Character_042,Fixed9x15_Character_043,Fixed9x15_Character_044,Fixed9x15_Character_045,Fixed9x15_Character_046,Fixed9x15_Character_047,
                                                Fixed9x15_Character_048,Fixed9x15_Character_049,Fixed9x15_Character_050,Fixed9x15_Character_051,Fixed9x15_Character_052,Fixed9x15_Character_053,Fixed9x15_Character_054,Fixed9x15_Character_055,Fixed9x15_Character_056,Fixed9x15_Character_057,Fixed9x15_Character_058,Fixed9x15_Character_059,Fixed9x15_Character_060,Fixed9x15_Character_061,Fixed9x15_Character_062,Fixed9x15_Character_063,
                                                Fixed9x15_Character_064,Fixed9x15_Character_065,Fixed9x15_Character_066,Fixed9x15_Character_067,Fixed9x15_Character_068,Fixed9x15_Character_069,Fixed9x15_Character_070,Fixed9x15_Character_071,Fixed9x15_Character_072,Fixed9x15_Character_073,Fixed9x15_Character_074,Fixed9x15_Character_075,Fixed9x15_Character_076,Fixed9x15_Character_077,Fixed9x15_Character_078,Fixed9x15_Character_079,
                                                Fixed9x15_Character_080,Fixed9x15_Character_081,Fixed9x15_Character_082,Fixed9x15_Character_083,Fixed9x15_Character_084,Fixed9x15_Character_085,Fixed9x15_Character_086,Fixed9x15_Character_087,Fixed9x15_Character_088,Fixed9x15_Character_089,Fixed9x15_Character_090,Fixed9x15_Character_091,Fixed9x15_Character_092,Fixed9x15_Character_093,Fixed9x15_Character_094,Fixed9x15_Character_095,
                                                Fixed9x15_Character_096,Fixed9x15_Character_097,Fixed9x15_Character_098,Fixed9x15_Character_099,Fixed9x15_Character_100,Fixed9x15_Character_101,Fixed9x15_Character_102,Fixed9x15_Character_103,Fixed9x15_Character_104,Fixed9x15_Character_105,Fixed9x15_Character_106,Fixed9x15_Character_107,Fixed9x15_Character_108,Fixed9x15_Character_109,Fixed9x15_Character_110,Fixed9x15_Character_111,
                                                Fixed9x15_Character_112,Fixed9x15_Character_113,Fixed9x15_Character_114,Fixed9x15_Character_115,Fixed9x15_Character_116,Fixed9x15_Character_117,Fixed9x15_Character_118,Fixed9x15_Character_119,Fixed9x15_Character_120,Fixed9x15_Character_121,Fixed9x15_Character_122,Fixed9x15_Character_123,Fixed9x15_Character_124,Fixed9x15_Character_125,Fixed9x15_Character_126,Fixed9x15_Character_032,
                                                Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,
                                                Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,Fixed9x15_Character_032,
                                                Fixed9x15_Character_160,Fixed9x15_Character_161,Fixed9x15_Character_162,Fixed9x15_Character_163,Fixed9x15_Character_164,Fixed9x15_Character_165,Fixed9x15_Character_166,Fixed9x15_Character_167,Fixed9x15_Character_168,Fixed9x15_Character_169,Fixed9x15_Character_170,Fixed9x15_Character_171,Fixed9x15_Character_172,Fixed9x15_Character_173,Fixed9x15_Character_174,Fixed9x15_Character_175,
                                                Fixed9x15_Character_176,Fixed9x15_Character_177,Fixed9x15_Character_178,Fixed9x15_Character_179,Fixed9x15_Character_180,Fixed9x15_Character_181,Fixed9x15_Character_182,Fixed9x15_Character_183,Fixed9x15_Character_184,Fixed9x15_Character_185,Fixed9x15_Character_186,Fixed9x15_Character_187,Fixed9x15_Character_188,Fixed9x15_Character_189,Fixed9x15_Character_190,Fixed9x15_Character_191,
                                                Fixed9x15_Character_192,Fixed9x15_Character_193,Fixed9x15_Character_194,Fixed9x15_Character_195,Fixed9x15_Character_196,Fixed9x15_Character_197,Fixed9x15_Character_198,Fixed9x15_Character_199,Fixed9x15_Character_200,Fixed9x15_Character_201,Fixed9x15_Character_202,Fixed9x15_Character_203,Fixed9x15_Character_204,Fixed9x15_Character_205,Fixed9x15_Character_206,Fixed9x15_Character_207,
                                                Fixed9x15_Character_208,Fixed9x15_Character_209,Fixed9x15_Character_210,Fixed9x15_Character_211,Fixed9x15_Character_212,Fixed9x15_Character_213,Fixed9x15_Character_214,Fixed9x15_Character_215,Fixed9x15_Character_216,Fixed9x15_Character_217,Fixed9x15_Character_218,Fixed9x15_Character_219,Fixed9x15_Character_220,Fixed9x15_Character_221,Fixed9x15_Character_222,Fixed9x15_Character_223,
                                                Fixed9x15_Character_224,Fixed9x15_Character_225,Fixed9x15_Character_226,Fixed9x15_Character_227,Fixed9x15_Character_228,Fixed9x15_Character_229,Fixed9x15_Character_230,Fixed9x15_Character_231,Fixed9x15_Character_232,Fixed9x15_Character_233,Fixed9x15_Character_234,Fixed9x15_Character_235,Fixed9x15_Character_236,Fixed9x15_Character_237,Fixed9x15_Character_238,Fixed9x15_Character_239,
                                                Fixed9x15_Character_240,Fixed9x15_Character_241,Fixed9x15_Character_242,Fixed9x15_Character_243,Fixed9x15_Character_244,Fixed9x15_Character_245,Fixed9x15_Character_246,Fixed9x15_Character_247,Fixed9x15_Character_248,Fixed9x15_Character_249,Fixed9x15_Character_250,Fixed9x15_Character_251,Fixed9x15_Character_252,Fixed9x15_Character_253,Fixed9x15_Character_254,Fixed9x15_Character_255,NULL};

    /* The font structure: */
    const Font fontFixed9x15 = { "-misc-fixed-medium-r-normal--15-140-75-75-C-90-iso8859-1", 256, 16, Fixed9x15_Character_Map, 0, 4 };

    const GLubyte Helvetica10_Character_000[] = {  8,  0,  0,  0, 84,  0, 68,  0, 68,  0, 84,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_001[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_002[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_003[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_004[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_005[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_006[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_007[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_008[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_009[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_010[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_011[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_012[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_013[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_014[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_015[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_016[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_017[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_018[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_019[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_020[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_021[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_022[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_023[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_024[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_025[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_026[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_027[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_028[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_029[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_030[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_031[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_032[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_033[] = {  3,  0,  0,  0, 64,  0, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_034[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80, 80,  0,  0,  0};
    const GLubyte Helvetica10_Character_035[] = {  6,  0,  0,  0, 80, 80,248, 40,124, 40, 40,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_036[] = {  6,  0,  0, 32,112,168, 40,112,160,168,112, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_037[] = {  9,  0,  0,  0,  0,  0,  0, 38,  0, 41,  0, 22,  0, 16,  0,  8,  0,104,  0,148,  0,100,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_038[] = {  8,  0,  0,  0, 50, 76, 76, 82, 48, 40, 40, 16,  0,  0,  0};
    const GLubyte Helvetica10_Character_039[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0, 64, 32, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_040[] = {  4,  0, 32, 64, 64,128,128,128,128, 64, 64, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_041[] = {  4,  0, 64, 32, 32, 16, 16, 16, 16, 32, 32, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_042[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,160, 64,160,  0,  0,  0};
    const GLubyte Helvetica10_Character_043[] = {  6,  0,  0,  0,  0, 32, 32,248, 32, 32,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_044[] = {  3,  0,128, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_045[] = {  7,  0,  0,  0,  0,  0,  0,124,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_046[] = {  3,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_047[] = {  3,  0,  0,  0,128,128, 64, 64, 64, 64, 32, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_048[] = {  6,  0,  0,  0,112,136,136,136,136,136,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_049[] = {  6,  0,  0,  0, 32, 32, 32, 32, 32, 32, 96, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_050[] = {  6,  0,  0,  0,248,128, 64, 48,  8,  8,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_051[] = {  6,  0,  0,  0,112,136,  8,  8, 48,  8,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_052[] = {  6,  0,  0,  0, 16, 16,248,144, 80, 80, 48, 16,  0,  0,  0};
    const GLubyte Helvetica10_Character_053[] = {  6,  0,  0,  0,112,136,  8,  8,240,128,128,248,  0,  0,  0};
    const GLubyte Helvetica10_Character_054[] = {  6,  0,  0,  0,112,136,136,200,176,128,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_055[] = {  6,  0,  0,  0, 64, 64, 32, 32, 16, 16,  8,248,  0,  0,  0};
    const GLubyte Helvetica10_Character_056[] = {  6,  0,  0,  0,112,136,136,136,112,136,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_057[] = {  6,  0,  0,  0,112,136,  8,104,152,136,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_058[] = {  3,  0,  0,  0, 64,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_059[] = {  3,  0,128, 64, 64,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_060[] = {  6,  0,  0,  0,  0, 16, 32, 64, 32, 16,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_061[] = {  5,  0,  0,  0,  0,  0,240,  0,240,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_062[] = {  6,  0,  0,  0,  0, 64, 32, 16, 32, 64,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_063[] = {  6,  0,  0,  0, 32,  0, 32, 32, 16,  8, 72, 48,  0,  0,  0};
    const GLubyte Helvetica10_Character_064[] = { 11,  0,  0, 62,  0, 64,  0,155,  0,164,128,164,128,162, 64,146, 64, 77, 64, 32,128, 31,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_065[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16,  0,  0,  0};
    const GLubyte Helvetica10_Character_066[] = {  7,  0,  0,  0,120, 68, 68, 68,120, 68, 68,120,  0,  0,  0};
    const GLubyte Helvetica10_Character_067[] = {  8,  0,  0,  0, 60, 66, 64, 64, 64, 64, 66, 60,  0,  0,  0};
    const GLubyte Helvetica10_Character_068[] = {  8,  0,  0,  0,120, 68, 66, 66, 66, 66, 68,120,  0,  0,  0};
    const GLubyte Helvetica10_Character_069[] = {  7,  0,  0,  0,124, 64, 64, 64,124, 64, 64,124,  0,  0,  0};
    const GLubyte Helvetica10_Character_070[] = {  6,  0,  0,  0, 64, 64, 64, 64,120, 64, 64,124,  0,  0,  0};
    const GLubyte Helvetica10_Character_071[] = {  8,  0,  0,  0, 58, 70, 66, 70, 64, 64, 66, 60,  0,  0,  0};
    const GLubyte Helvetica10_Character_072[] = {  8,  0,  0,  0, 66, 66, 66, 66,126, 66, 66, 66,  0,  0,  0};
    const GLubyte Helvetica10_Character_073[] = {  3,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_074[] = {  5,  0,  0,  0, 96,144, 16, 16, 16, 16, 16, 16,  0,  0,  0};
    const GLubyte Helvetica10_Character_075[] = {  7,  0,  0,  0, 68, 68, 72, 72,112, 80, 72, 68,  0,  0,  0};
    const GLubyte Helvetica10_Character_076[] = {  6,  0,  0,  0,120, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_077[] = {  9,  0,  0,  0,  0,  0,  0, 73,  0, 73,  0, 73,  0, 85,  0, 85,  0, 99,  0, 99,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_078[] = {  8,  0,  0,  0, 70, 70, 74, 74, 82, 82, 98, 98,  0,  0,  0};
    const GLubyte Helvetica10_Character_079[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 60,  0,  0,  0};
    const GLubyte Helvetica10_Character_080[] = {  7,  0,  0,  0, 64, 64, 64, 64,120, 68, 68,120,  0,  0,  0};
    const GLubyte Helvetica10_Character_081[] = {  8,  0,  0,  1, 62, 70, 74, 66, 66, 66, 66, 60,  0,  0,  0};
    const GLubyte Helvetica10_Character_082[] = {  7,  0,  0,  0, 68, 68, 68, 68,120, 68, 68,120,  0,  0,  0};
    const GLubyte Helvetica10_Character_083[] = {  7,  0,  0,  0, 56, 68, 68,  4, 56, 64, 68, 56,  0,  0,  0};
    const GLubyte Helvetica10_Character_084[] = {  5,  0,  0,  0, 32, 32, 32, 32, 32, 32, 32,248,  0,  0,  0};
    const GLubyte Helvetica10_Character_085[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66,  0,  0,  0};
    const GLubyte Helvetica10_Character_086[] = {  7,  0,  0,  0, 16, 40, 40, 68, 68, 68,130,130,  0,  0,  0};
    const GLubyte Helvetica10_Character_087[] = {  9,  0,  0,  0,  0,  0,  0, 34,  0, 34,  0, 34,  0, 85,  0, 73,  0, 73,  0,136,128,136,128,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_088[] = {  7,  0,  0,  0, 68, 68, 40, 40, 16, 40, 68, 68,  0,  0,  0};
    const GLubyte Helvetica10_Character_089[] = {  7,  0,  0,  0, 16, 16, 16, 40, 40, 68, 68,130,  0,  0,  0};
    const GLubyte Helvetica10_Character_090[] = {  7,  0,  0,  0,124, 64, 32, 16, 16,  8,  4,124,  0,  0,  0};
    const GLubyte Helvetica10_Character_091[] = {  3,  0, 96, 64, 64, 64, 64, 64, 64, 64, 64, 96,  0,  0,  0};
    const GLubyte Helvetica10_Character_092[] = {  3,  0,  0,  0, 32, 32, 64, 64, 64, 64,128,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_093[] = {  3,  0,192, 64, 64, 64, 64, 64, 64, 64, 64,192,  0,  0,  0};
    const GLubyte Helvetica10_Character_094[] = {  6,  0,  0,  0,  0,  0,  0,136, 80, 80, 32, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_095[] = {  6,  0,252,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_096[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0, 63, 64, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_097[] = {  5,  0,  0,  0,104,144,144,112, 16,224,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_098[] = {  6,  0,  0,  0,176,200,136,136,200,176,128,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_099[] = {  5,  0,  0,  0, 96,144,128,128,144, 96,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_100[] = {  6,  0,  0,  0,104,152,136,136,152,104,  8,  8,  0,  0,  0};
    const GLubyte Helvetica10_Character_101[] = {  5,  0,  0,  0, 96,144,128,240,144, 96,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_102[] = {  4,  0,  0,  0, 64, 64, 64, 64, 64,224, 64, 48,  0,  0,  0};
    const GLubyte Helvetica10_Character_103[] = {  6,  0,112,  8,104,152,136,136,152,104,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_104[] = {  6,  0,  0,  0,136,136,136,136,200,176,128,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_105[] = {  2,  0,  0,  0,128,128,128,128,128,128,  0,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_106[] = {  2,  0,  0,128,128,128,128,128,128,128,  0,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_107[] = {  5,  0,  0,  0,144,144,160,192,160,144,128,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_108[] = {  2,  0,  0,  0,128,128,128,128,128,128,128,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_109[] = {  8,  0,  0,  0,146,146,146,146,146,236,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_110[] = {  6,  0,  0,  0,136,136,136,136,200,176,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_111[] = {  6,  0,  0,  0,112,136,136,136,136,112,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_112[] = {  6,  0,128,128,176,200,136,136,200,176,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_113[] = {  6,  0,  8,  8,104,152,136,136,152,104,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_114[] = {  4,  0,  0,  0,128,128,128,128,192,160,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_115[] = {  5,  0,  0,  0, 96,144, 16, 96,144, 96,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_116[] = {  4,  0,  0,  0, 96, 64, 64, 64, 64,224, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_117[] = {  5,  0,  0,  0,112,144,144,144,144,144,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_118[] = {  6,  0,  0,  0, 32, 32, 80, 80,136,136,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_119[] = {  8,  0,  0,  0, 40, 40, 84, 84,146,146,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_120[] = {  6,  0,  0,  0,136,136, 80, 32, 80,136,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_121[] = {  5,  0,128, 64, 64, 96,160,160,144,144,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_122[] = {  5,  0,  0,  0,240,128, 64, 32, 16,240,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_123[] = {  3,  0, 32, 64, 64, 64, 64,128, 64, 64, 64, 32,  0,  0,  0};
    const GLubyte Helvetica10_Character_124[] = {  3,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_125[] = {  3,  0,128, 64, 64, 64, 64, 32, 64, 64, 64,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_126[] = {  7,  0,  0,  0,  0,  0,  0,152,100,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_127[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_128[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_129[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_130[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_131[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_132[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_133[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_134[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_135[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_136[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_137[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_138[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_139[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_140[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_141[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_142[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_143[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_144[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_145[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_146[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_147[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_148[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_149[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_150[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_151[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_152[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_153[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_154[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_155[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_156[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_157[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_158[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_159[] = { 13,  0,  0,  0,  0,  0,  0, 84,  0,  0,  0, 68,  0,  0,  0, 68,  0,  0,  0, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_160[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_161[] = {  3,  0, 64, 64, 64, 64, 64, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_162[] = {  6,  0,  0, 64,112,168,160,160,168,112, 16,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_163[] = {  6,  0,  0,  0,176, 72, 64, 64,224, 64, 72, 48,  0,  0,  0};
    const GLubyte Helvetica10_Character_164[] = {  5,  0,  0,  0,  0,144, 96,144,144, 96,144,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_165[] = {  6,  0,  0,  0, 32,248, 32,248, 80, 80,136,136,  0,  0,  0};
    const GLubyte Helvetica10_Character_166[] = {  3,  0, 64, 64, 64, 64,  0,  0, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_167[] = {  6,  0,112,136, 24,112,200,152,112,192,136,112,  0,  0,  0};
    const GLubyte Helvetica10_Character_168[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,160,  0,  0,  0};
    const GLubyte Helvetica10_Character_169[] = {  9,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 77,  0, 81,  0, 77,  0, 34,  0, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_170[] = {  4,  0,  0,  0,  0,  0,  0,224,  0,160, 32,224,  0,  0,  0};
    const GLubyte Helvetica10_Character_171[] = {  6,  0,  0,  0, 40, 80,160, 80, 40,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_172[] = {  7,  0,  0,  0,  0,  0,  4,  4,124,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_173[] = {  4,  0,  0,  0,  0,  0,  0,224,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_174[] = {  9,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 85,  0, 89,  0, 93,  0, 34,  0, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_175[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,  0,  0,  0};
    const GLubyte Helvetica10_Character_176[] = {  4,  0,  0,  0,  0,  0,  0, 96,144,144, 96,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_177[] = {  6,  0,  0,  0,248,  0, 32, 32,248, 32, 32,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_178[] = {  3,  0,  0,  0,  0,  0,  0,224, 64,160, 96,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_179[] = {  3,  0,  0,  0,  0,  0,  0,192, 32, 64,224,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_180[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_181[] = {  5,  0,128,128,240,144,144,144,144,144,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_182[] = {  6,  0, 40, 40, 40, 40, 40,104,232,232,232,124,  0,  0,  0};
    const GLubyte Helvetica10_Character_183[] = {  3,  0,  0,  0,  0,  0,  0,192,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_184[] = {  3,  0,192, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_185[] = {  3,  0,  0,  0,  0,  0,  0, 64, 64,192, 64,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_186[] = {  4,  0,  0,  0,  0,  0,  0,224,  0,224,160,224,  0,  0,  0};
    const GLubyte Helvetica10_Character_187[] = {  6,  0,  0,  0,160, 80, 40, 80,160,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_188[] = {  9,  0,  0,  0,  0,  0,  0, 33,  0, 23,128, 19,  0,  9,  0, 72,  0, 68,  0,196,  0, 66,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_189[] = {  9,  0,  0,  0,  0,  0,  0, 39,  0, 18,  0, 21,  0, 11,  0, 72,  0, 68,  0,196,  0, 66,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_190[] = {  9,  0,  0,  0,  0,  0,  0, 33,  0, 23,128, 19,  0,  9,  0,200,  0, 36,  0, 68,  0,226,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_191[] = {  6,  0, 48, 72, 64, 32, 16, 16,  0, 16,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_192[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16,  0, 16, 32};
    const GLubyte Helvetica10_Character_193[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16,  0, 16,  8};
    const GLubyte Helvetica10_Character_194[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16,  0, 40, 16};
    const GLubyte Helvetica10_Character_195[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16,  0, 40, 20};
    const GLubyte Helvetica10_Character_196[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16,  0, 40,  0};
    const GLubyte Helvetica10_Character_197[] = {  7,  0,  0,  0,130,130,124, 68, 40, 40, 16, 16, 16, 40, 16};
    const GLubyte Helvetica10_Character_198[] = { 10,  0,  0,  0,  0,  0,  0,143,128,136,  0,120,  0, 72,  0, 47,128, 40,  0, 24,  0, 31,128,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_199[] = {  8,  0, 24,  8, 60, 66, 64, 64, 64, 64, 66, 60,  0,  0,  0};
    const GLubyte Helvetica10_Character_200[] = {  7,  0,  0,  0,124, 64, 64, 64,124, 64, 64,124,  0, 16, 32};
    const GLubyte Helvetica10_Character_201[] = {  7,  0,  0,  0,124, 64, 64, 64,124, 64, 64,124,  0, 16,  8};
    const GLubyte Helvetica10_Character_202[] = {  7,  0,  0,  0,124, 64, 64,124, 64, 64, 64,124,  0, 40, 16};
    const GLubyte Helvetica10_Character_203[] = {  7,  0,  0,  0,124, 64, 64, 64,124, 64, 64,124,  0, 40,  0};
    const GLubyte Helvetica10_Character_204[] = {  3,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64,  0, 64,128};
    const GLubyte Helvetica10_Character_205[] = {  3,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64,  0, 64, 32};
    const GLubyte Helvetica10_Character_206[] = {  3,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64,  0,160, 64};
    const GLubyte Helvetica10_Character_207[] = {  3,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64,  0,160,  0};
    const GLubyte Helvetica10_Character_208[] = {  8,  0,  0,  0,120, 68, 66, 66,242, 66, 68,120,  0,  0,  0};
    const GLubyte Helvetica10_Character_209[] = {  8,  0,  0,  0, 70, 70, 74, 74, 82, 82, 98, 98,  0, 40, 20};
    const GLubyte Helvetica10_Character_210[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 60,  0,  8, 16};
    const GLubyte Helvetica10_Character_211[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 60,  0,  8,  4};
    const GLubyte Helvetica10_Character_212[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 60,  0, 20,  8};
    const GLubyte Helvetica10_Character_213[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 60,  0, 40, 20};
    const GLubyte Helvetica10_Character_214[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 60,  0, 36,  0};
    const GLubyte Helvetica10_Character_215[] = {  6,  0,  0,  0,  0,136, 80, 32, 80,136,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_216[] = {  8,  0,  0, 64, 60, 98, 82, 82, 74, 74, 70, 60,  2,  0,  0};
    const GLubyte Helvetica10_Character_217[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66,  0,  8, 16};
    const GLubyte Helvetica10_Character_218[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66,  0, 16,  8};
    const GLubyte Helvetica10_Character_219[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66,  0, 20,  8};
    const GLubyte Helvetica10_Character_220[] = {  8,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66,  0, 36,  0};
    const GLubyte Helvetica10_Character_221[] = {  7,  0,  0,  0, 16, 16, 16, 40, 40, 68, 68,130,  0, 16,  8};
    const GLubyte Helvetica10_Character_222[] = {  7,  0,  0,  0, 64, 64,120, 68, 68,120, 64, 64,  0,  0,  0};
    const GLubyte Helvetica10_Character_223[] = {  5,  0,  0,  0,160,144,144,144,160,144,144, 96,  0,  0,  0};
    const GLubyte Helvetica10_Character_224[] = {  5,  0,  0,  0,104,144,144,112, 16,224,  0, 32, 64,  0,  0};
    const GLubyte Helvetica10_Character_225[] = {  5,  0,  0,  0,104,144,144,112, 16,224,  0, 32, 16,  0,  0};
    const GLubyte Helvetica10_Character_226[] = {  5,  0,  0,  0,104,144,144,112, 16,224,  0, 80, 32,  0,  0};
    const GLubyte Helvetica10_Character_227[] = {  5,  0,  0,  0,104,144,144,112, 16,224,  0,160, 80,  0,  0};
    const GLubyte Helvetica10_Character_228[] = {  5,  0,  0,  0,104,144,144,112, 16,224,  0, 80,  0,  0,  0};
    const GLubyte Helvetica10_Character_229[] = {  5,  0,  0,  0,104,144,144,112, 16,224, 32, 80, 32,  0,  0};
    const GLubyte Helvetica10_Character_230[] = {  8,  0,  0,  0,108,146,144,126, 18,236,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_231[] = {  5,  0, 96, 32, 96,144,128,128,144, 96,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_232[] = {  5,  0,  0,  0, 96,144,128,240,144, 96,  0, 32, 64,  0,  0};
    const GLubyte Helvetica10_Character_233[] = {  5,  0,  0,  0, 96,144,128,240,144, 96,  0, 64, 32,  0,  0};
    const GLubyte Helvetica10_Character_234[] = {  5,  0,  0,  0, 96,144,128,240,144, 96,  0, 80, 32,  0,  0};
    const GLubyte Helvetica10_Character_235[] = {  5,  0,  0,  0, 96,144,128,240,144, 96,  0, 80,  0,  0,  0};
    const GLubyte Helvetica10_Character_236[] = {  2,  0,  0,  0,128,128,128,128,128,128,  0,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_237[] = {  2,  0,  0,  0,128,128,128,128,128,128,  0,128, 64,  0,  0};
    const GLubyte Helvetica10_Character_238[] = {  2,  0,  0,  0,128,128,128,128,128,128,  0, 64,128,  0,  0};
    const GLubyte Helvetica10_Character_239[] = {  2,  0,  0,  0, 64, 64, 64, 64, 64, 64,  0,160,  0,  0,  0};
    const GLubyte Helvetica10_Character_240[] = {  6,  0,  0,  0,112,136,136,136,136,120,144, 96, 80,  0,  0};
    const GLubyte Helvetica10_Character_241[] = {  5,  0,  0,  0,144,144,144,144,144,224,  0,160, 80,  0,  0};
    const GLubyte Helvetica10_Character_242[] = {  6,  0,  0,  0,112,136,136,136,136,112,  0, 32, 64,  0,  0};
    const GLubyte Helvetica10_Character_243[] = {  6,  0,  0,  0,112,136,136,136,136,112,  0, 32, 16,  0,  0};
    const GLubyte Helvetica10_Character_244[] = {  6,  0,  0,  0,112,136,136,136,136,112,  0, 80, 32,  0,  0};
    const GLubyte Helvetica10_Character_245[] = {  6,  0,  0,  0,112,136,136,136,136,112,  0, 80, 40,  0,  0};
    const GLubyte Helvetica10_Character_246[] = {  6,  0,  0,  0,112,136,136,136,136,112,  0, 80,  0,  0,  0};
    const GLubyte Helvetica10_Character_247[] = {  6,  0,  0,  0,  0, 32,  0,248,  0, 32,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_248[] = {  6,  0,  0,  0,112,136,200,168,152,116,  0,  0,  0,  0,  0};
    const GLubyte Helvetica10_Character_249[] = {  5,  0,  0,  0,112,144,144,144,144,144,  0, 32, 64,  0,  0};
    const GLubyte Helvetica10_Character_250[] = {  5,  0,  0,  0,112,144,144,144,144,144,  0, 64, 32,  0,  0};
    const GLubyte Helvetica10_Character_251[] = {  5,  0,  0,  0,112,144,144,144,144,144,  0, 80, 32,  0,  0};
    const GLubyte Helvetica10_Character_252[] = {  5,  0,  0,  0,112,144,144,144,144,144,  0, 80,  0,  0,  0};
    const GLubyte Helvetica10_Character_253[] = {  5,  0,128, 64, 64, 96,160,160,144,144,  0, 32, 16,  0,  0};
    const GLubyte Helvetica10_Character_254[] = {  6,  0,128,128,176,200,136,136,200,176,128,128,  0,  0,  0};
    const GLubyte Helvetica10_Character_255[] = {  5,  0,128, 64, 64, 96,160,160,144,144,  0, 80,  0,  0,  0};

    /* The font characters mapping: */
    const GLubyte* Helvetica10_Character_Map[] = {Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,
                                                  Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,
                                                  Helvetica10_Character_032,Helvetica10_Character_033,Helvetica10_Character_034,Helvetica10_Character_035,Helvetica10_Character_036,Helvetica10_Character_037,Helvetica10_Character_038,Helvetica10_Character_039,Helvetica10_Character_040,Helvetica10_Character_041,Helvetica10_Character_042,Helvetica10_Character_043,Helvetica10_Character_044,Helvetica10_Character_045,Helvetica10_Character_046,Helvetica10_Character_047,
                                                  Helvetica10_Character_048,Helvetica10_Character_049,Helvetica10_Character_050,Helvetica10_Character_051,Helvetica10_Character_052,Helvetica10_Character_053,Helvetica10_Character_054,Helvetica10_Character_055,Helvetica10_Character_056,Helvetica10_Character_057,Helvetica10_Character_058,Helvetica10_Character_059,Helvetica10_Character_060,Helvetica10_Character_061,Helvetica10_Character_062,Helvetica10_Character_063,
                                                  Helvetica10_Character_064,Helvetica10_Character_065,Helvetica10_Character_066,Helvetica10_Character_067,Helvetica10_Character_068,Helvetica10_Character_069,Helvetica10_Character_070,Helvetica10_Character_071,Helvetica10_Character_072,Helvetica10_Character_073,Helvetica10_Character_074,Helvetica10_Character_075,Helvetica10_Character_076,Helvetica10_Character_077,Helvetica10_Character_078,Helvetica10_Character_079,
                                                  Helvetica10_Character_080,Helvetica10_Character_081,Helvetica10_Character_082,Helvetica10_Character_083,Helvetica10_Character_084,Helvetica10_Character_085,Helvetica10_Character_086,Helvetica10_Character_087,Helvetica10_Character_088,Helvetica10_Character_089,Helvetica10_Character_090,Helvetica10_Character_091,Helvetica10_Character_092,Helvetica10_Character_093,Helvetica10_Character_094,Helvetica10_Character_095,
                                                  Helvetica10_Character_096,Helvetica10_Character_097,Helvetica10_Character_098,Helvetica10_Character_099,Helvetica10_Character_100,Helvetica10_Character_101,Helvetica10_Character_102,Helvetica10_Character_103,Helvetica10_Character_104,Helvetica10_Character_105,Helvetica10_Character_106,Helvetica10_Character_107,Helvetica10_Character_108,Helvetica10_Character_109,Helvetica10_Character_110,Helvetica10_Character_111,
                                                  Helvetica10_Character_112,Helvetica10_Character_113,Helvetica10_Character_114,Helvetica10_Character_115,Helvetica10_Character_116,Helvetica10_Character_117,Helvetica10_Character_118,Helvetica10_Character_119,Helvetica10_Character_120,Helvetica10_Character_121,Helvetica10_Character_122,Helvetica10_Character_123,Helvetica10_Character_124,Helvetica10_Character_125,Helvetica10_Character_126,Helvetica10_Character_032,
                                                  Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,
                                                  Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,Helvetica10_Character_032,
                                                  Helvetica10_Character_160,Helvetica10_Character_161,Helvetica10_Character_162,Helvetica10_Character_163,Helvetica10_Character_164,Helvetica10_Character_165,Helvetica10_Character_166,Helvetica10_Character_167,Helvetica10_Character_168,Helvetica10_Character_169,Helvetica10_Character_170,Helvetica10_Character_171,Helvetica10_Character_172,Helvetica10_Character_173,Helvetica10_Character_174,Helvetica10_Character_175,
                                                  Helvetica10_Character_176,Helvetica10_Character_177,Helvetica10_Character_178,Helvetica10_Character_179,Helvetica10_Character_180,Helvetica10_Character_181,Helvetica10_Character_182,Helvetica10_Character_183,Helvetica10_Character_184,Helvetica10_Character_185,Helvetica10_Character_186,Helvetica10_Character_187,Helvetica10_Character_188,Helvetica10_Character_189,Helvetica10_Character_190,Helvetica10_Character_191,
                                                  Helvetica10_Character_192,Helvetica10_Character_193,Helvetica10_Character_194,Helvetica10_Character_195,Helvetica10_Character_196,Helvetica10_Character_197,Helvetica10_Character_198,Helvetica10_Character_199,Helvetica10_Character_200,Helvetica10_Character_201,Helvetica10_Character_202,Helvetica10_Character_203,Helvetica10_Character_204,Helvetica10_Character_205,Helvetica10_Character_206,Helvetica10_Character_207,
                                                  Helvetica10_Character_208,Helvetica10_Character_209,Helvetica10_Character_210,Helvetica10_Character_211,Helvetica10_Character_212,Helvetica10_Character_213,Helvetica10_Character_214,Helvetica10_Character_215,Helvetica10_Character_216,Helvetica10_Character_217,Helvetica10_Character_218,Helvetica10_Character_219,Helvetica10_Character_220,Helvetica10_Character_221,Helvetica10_Character_222,Helvetica10_Character_223,
                                                  Helvetica10_Character_224,Helvetica10_Character_225,Helvetica10_Character_226,Helvetica10_Character_227,Helvetica10_Character_228,Helvetica10_Character_229,Helvetica10_Character_230,Helvetica10_Character_231,Helvetica10_Character_232,Helvetica10_Character_233,Helvetica10_Character_234,Helvetica10_Character_235,Helvetica10_Character_236,Helvetica10_Character_237,Helvetica10_Character_238,Helvetica10_Character_239,
                                                  Helvetica10_Character_240,Helvetica10_Character_241,Helvetica10_Character_242,Helvetica10_Character_243,Helvetica10_Character_244,Helvetica10_Character_245,Helvetica10_Character_246,Helvetica10_Character_247,Helvetica10_Character_248,Helvetica10_Character_249,Helvetica10_Character_250,Helvetica10_Character_251,Helvetica10_Character_252,Helvetica10_Character_253,Helvetica10_Character_254,Helvetica10_Character_255,NULL};

    /* The font structure: */
    const Font fontHelvetica10 = { "-adobe-helvetica-medium-r-normal--10-100-75-75-p-56-iso8859-1", 256, 14, Helvetica10_Character_Map, 0, 3 };

    const GLubyte Helvetica12_Character_000[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_001[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_002[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_003[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_004[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_005[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_006[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_007[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_008[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_009[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_010[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_011[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_012[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_013[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_014[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_015[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_016[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_017[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_018[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_019[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_020[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_021[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_022[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_023[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_024[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_025[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_026[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_027[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_028[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_029[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_030[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_031[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_032[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_033[] = {  3,  0,  0,  0,  0, 64,  0, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_034[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80, 80, 80,  0,  0,  0};
    const GLubyte Helvetica12_Character_035[] = {  7,  0,  0,  0,  0, 80, 80, 80,252, 40,252, 40, 40,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_036[] = {  7,  0,  0,  0, 16, 56, 84, 84, 20, 56, 80, 84, 56, 16,  0,  0,  0};
    const GLubyte Helvetica12_Character_037[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 17,128, 10, 64, 10, 64,  9,128,  4,  0, 52,  0, 74,  0, 74,  0, 49,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_038[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 57,  0, 70,  0, 66,  0, 69,  0, 40,  0, 24,  0, 36,  0, 36,  0, 24,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_039[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 32, 96,  0,  0,  0};
    const GLubyte Helvetica12_Character_040[] = {  4,  0, 16, 32, 32, 64, 64, 64, 64, 64, 64, 32, 32, 16,  0,  0,  0};
    const GLubyte Helvetica12_Character_041[] = {  4,  0,128, 64, 64, 32, 32, 32, 32, 32, 32, 64, 64,128,  0,  0,  0};
    const GLubyte Helvetica12_Character_042[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80, 32, 80,  0,  0,  0};
    const GLubyte Helvetica12_Character_043[] = {  7,  0,  0,  0,  0,  0, 16, 16,124, 16, 16,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_044[] = {  4,  0,  0, 64, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_045[] = {  8,  0,  0,  0,  0,  0,  0,  0,124,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_046[] = {  3,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_047[] = {  4,  0,  0,  0,  0,128,128, 64, 64, 64, 32, 32, 16, 16,  0,  0,  0};
    const GLubyte Helvetica12_Character_048[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 68, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_049[] = {  7,  0,  0,  0,  0, 16, 16, 16, 16, 16, 16, 16,112, 16,  0,  0,  0};
    const GLubyte Helvetica12_Character_050[] = {  7,  0,  0,  0,  0,124, 64, 64, 32, 16,  8,  4, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_051[] = {  7,  0,  0,  0,  0, 56, 68, 68,  4,  4, 24,  4, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_052[] = {  7,  0,  0,  0,  0,  8,  8,252,136, 72, 40, 40, 24,  8,  0,  0,  0};
    const GLubyte Helvetica12_Character_053[] = {  7,  0,  0,  0,  0, 56, 68, 68,  4,  4,120, 64, 64,124,  0,  0,  0};
    const GLubyte Helvetica12_Character_054[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68,100, 88, 64, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_055[] = {  7,  0,  0,  0,  0, 32, 32, 16, 16, 16,  8,  8,  4,124,  0,  0,  0};
    const GLubyte Helvetica12_Character_056[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 56, 68, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_057[] = {  7,  0,  0,  0,  0, 56, 68,  4,  4, 60, 68, 68, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_058[] = {  3,  0,  0,  0,  0, 64,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_059[] = {  3,  0,  0,128, 64, 64,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_060[] = {  7,  0,  0,  0,  0,  0, 12, 48,192, 48, 12,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_061[] = {  7,  0,  0,  0,  0,  0,  0,124,  0,124,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_062[] = {  7,  0,  0,  0,  0,  0, 96, 24,  6, 24, 96,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_063[] = {  7,  0,  0,  0,  0, 16,  0, 16, 16,  8,  8, 68, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_064[] = { 12,  0,  0,  0,  0,  0,  0, 31,  0, 32,  0, 77,128, 83, 64, 81, 32, 81, 32, 73, 32, 38,160, 48, 64, 15,128,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_065[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0, 20,  0,  8,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_066[] = {  8,  0,  0,  0,  0,124, 66, 66, 66,124, 66, 66, 66,124,  0,  0,  0};
    const GLubyte Helvetica12_Character_067[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 33,  0, 30,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_068[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,124,  0, 66,  0, 65,  0, 65,  0, 65,  0, 65,  0, 65,  0, 66,  0,124,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_069[] = {  8,  0,  0,  0,  0,126, 64, 64, 64,126, 64, 64, 64,126,  0,  0,  0};
    const GLubyte Helvetica12_Character_070[] = {  8,  0,  0,  0,  0, 64, 64, 64, 64,124, 64, 64, 64,126,  0,  0,  0};
    const GLubyte Helvetica12_Character_071[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 29,  0, 35,  0, 65,  0, 65,  0, 71,  0, 64,  0, 64,  0, 33,  0, 30,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_072[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 65,  0,127,  0, 65,  0, 65,  0, 65,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_073[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_074[] = {  7,  0,  0,  0,  0, 56, 68, 68,  4,  4,  4,  4,  4,  4,  0,  0,  0};
    const GLubyte Helvetica12_Character_075[] = {  8,  0,  0,  0,  0, 65, 66, 68, 72,112, 80, 72, 68, 66,  0,  0,  0};
    const GLubyte Helvetica12_Character_076[] = {  7,  0,  0,  0,  0,124, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_077[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 68, 64, 68, 64, 74, 64, 74, 64, 81, 64, 81, 64, 96,192, 96,192, 64, 64,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_078[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 67,  0, 69,  0, 69,  0, 73,  0, 81,  0, 81,  0, 97,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_079[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,128, 64,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_080[] = {  8,  0,  0,  0,  0, 64, 64, 64, 64,124, 66, 66, 66,124,  0,  0,  0};
    const GLubyte Helvetica12_Character_081[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,128, 33,  0, 66,128, 68,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_082[] = {  8,  0,  0,  0,  0, 66, 66, 66, 68,124, 66, 66, 66,124,  0,  0,  0};
    const GLubyte Helvetica12_Character_083[] = {  8,  0,  0,  0,  0, 60, 66, 66,  2, 12, 48, 64, 66, 60,  0,  0,  0};
    const GLubyte Helvetica12_Character_084[] = {  7,  0,  0,  0,  0, 16, 16, 16, 16, 16, 16, 16, 16,254,  0,  0,  0};
    const GLubyte Helvetica12_Character_085[] = {  8,  0,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 66,  0,  0,  0};
    const GLubyte Helvetica12_Character_086[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0, 20,  0, 20,  0, 34,  0, 34,  0, 34,  0, 65,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_087[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 17,  0, 17,  0, 17,  0, 42,128, 42,128, 36,128, 68, 64, 68, 64, 68, 64,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_088[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 34,  0, 34,  0, 20,  0,  8,  0, 20,  0, 34,  0, 34,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_089[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0, 20,  0, 34,  0, 34,  0, 65,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_090[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,127,  0, 64,  0, 32,  0, 16,  0,  8,  0,  4,  0,  2,  0,  1,  0,127,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_091[] = {  3,  0, 96, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 96,  0,  0,  0};
    const GLubyte Helvetica12_Character_092[] = {  4,  0,  0,  0,  0, 16, 16, 32, 32, 32, 64, 64,128,128,  0,  0,  0};
    const GLubyte Helvetica12_Character_093[] = {  3,  0,192, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,192,  0,  0,  0};
    const GLubyte Helvetica12_Character_094[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,136, 80, 32,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_095[] = {  7,  0,  0,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_096[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,128, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_097[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_098[] = {  7,  0,  0,  0,  0, 88,100, 68, 68, 68,100, 88, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_099[] = {  7,  0,  0,  0,  0, 56, 68, 64, 64, 64, 68, 56,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_100[] = {  7,  0,  0,  0,  0, 52, 76, 68, 68, 68, 76, 52,  4,  4,  0,  0,  0};
    const GLubyte Helvetica12_Character_101[] = {  7,  0,  0,  0,  0, 56, 68, 64,124, 68, 68, 56,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_102[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64,224, 64, 48,  0,  0,  0};
    const GLubyte Helvetica12_Character_103[] = {  7,  0, 56, 68,  4, 52, 76, 68, 68, 68, 76, 52,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_104[] = {  7,  0,  0,  0,  0, 68, 68, 68, 68, 68,100, 88, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_105[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64,  0, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_106[] = {  3,  0,128, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_107[] = {  6,  0,  0,  0,  0, 68, 72, 80, 96, 96, 80, 72, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_108[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_109[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 73,  0, 73,  0, 73,  0, 73,  0, 73,  0,109,  0, 82,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_110[] = {  7,  0,  0,  0,  0, 68, 68, 68, 68, 68,100, 88,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_111[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 56,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_112[] = {  7,  0, 64, 64, 64, 88,100, 68, 68, 68,100, 88,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_113[] = {  7,  0,  4,  4,  4, 52, 76, 68, 68, 68, 76, 52,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_114[] = {  4,  0,  0,  0,  0, 64, 64, 64, 64, 64, 96, 80,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_115[] = {  6,  0,  0,  0,  0, 48, 72,  8, 48, 64, 72, 48,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_116[] = {  3,  0,  0,  0,  0, 96, 64, 64, 64, 64, 64,224, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_117[] = {  7,  0,  0,  0,  0, 52, 76, 68, 68, 68, 68, 68,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_118[] = {  7,  0,  0,  0,  0, 16, 16, 40, 40, 68, 68, 68,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_119[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 34,  0, 85,  0, 73,  0, 73,  0,136,128,136,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_120[] = {  6,  0,  0,  0,  0,132,132, 72, 48, 48, 72,132,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_121[] = {  7,  0, 64, 32, 16, 16, 40, 40, 72, 68, 68, 68,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_122[] = {  6,  0,  0,  0,  0,120, 64, 32, 32, 16,  8,120,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_123[] = {  4,  0, 48, 64, 64, 64, 64, 64,128, 64, 64, 64, 64, 48,  0,  0,  0};
    const GLubyte Helvetica12_Character_124[] = {  3,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_125[] = {  4,  0,192, 32, 32, 32, 32, 32, 16, 32, 32, 32, 32,192,  0,  0,  0};
    const GLubyte Helvetica12_Character_126[] = {  7,  0,  0,  0,  0,  0,  0,  0,152,100,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_127[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_128[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_129[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_130[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_131[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_132[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_133[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_134[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_135[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_136[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_137[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_138[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_139[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_140[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_141[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_142[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_143[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_144[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_145[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_146[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_147[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_148[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_149[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_150[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_151[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_152[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_153[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_154[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_155[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_156[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_157[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_158[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_159[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0, 85,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 65,  0,  0,  0, 85,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_160[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_161[] = {  3,  0, 64, 64, 64, 64, 64, 64, 64, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_162[] = {  7,  0,  0,  0, 32, 56,100, 80, 80, 80, 84, 56,  8,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_163[] = {  7,  0,  0,  0,  0, 88, 36, 16, 16,120, 32, 32, 36, 24,  0,  0,  0};
    const GLubyte Helvetica12_Character_164[] = {  7,  0,  0,  0,  0,  0,132,120, 72, 72,120,132,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_165[] = {  7,  0,  0,  0,  0, 16, 16,124, 16,124, 16, 40, 68, 68,  0,  0,  0};
    const GLubyte Helvetica12_Character_166[] = {  3,  0,  0, 64, 64, 64, 64,  0,  0,  0, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_167[] = {  6,  0,112,136,  8, 48, 72,136,136,144, 96,128,136,112,  0,  0,  0};
    const GLubyte Helvetica12_Character_168[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,160,  0,  0,  0};
    const GLubyte Helvetica12_Character_169[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 32,128, 78, 64, 81, 64, 80, 64, 81, 64, 78, 64, 32,128, 31,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_170[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,112,  0, 80, 16,112,  0,  0,  0};
    const GLubyte Helvetica12_Character_171[] = {  7,  0,  0,  0,  0,  0, 20, 40, 80, 40, 20,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_172[] = {  8,  0,  0,  0,  0,  0,  0,  2,  2,  2,126,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_173[] = {  5,  0,  0,  0,  0,  0,  0,  0,240,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_174[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 32,128, 74, 64, 74, 64, 76, 64, 74, 64, 78, 64, 32,128, 31,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_175[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,  0,  0,  0};
    const GLubyte Helvetica12_Character_176[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0, 96,144,144, 96,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_177[] = {  7,  0,  0,  0,  0,124,  0, 16, 16,124, 16, 16,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_178[] = {  4,  0,  0,  0,  0,  0,  0,  0,240, 64, 32,144, 96,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_179[] = {  4,  0,  0,  0,  0,  0,  0,  0,192, 32, 64, 32,224,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_180[] = {  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64,  0,  0};
    const GLubyte Helvetica12_Character_181[] = {  7,  0, 64, 64, 64,116, 76, 68, 68, 68, 68, 68,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_182[] = {  7,  0, 40, 40, 40, 40, 40, 40,104,232,232,232,104, 60,  0,  0,  0};
    const GLubyte Helvetica12_Character_183[] = {  3,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_184[] = {  3,  0,192, 32, 32, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_185[] = {  4,  0,  0,  0,  0,  0,  0,  0, 32, 32, 32, 96, 32,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_186[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,112,  0,112, 80,112,  0,  0,  0};
    const GLubyte Helvetica12_Character_187[] = {  7,  0,  0,  0,  0,  0, 80, 40, 20, 40, 80,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_188[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 39,128, 21,  0, 19,  0, 73,  0, 68,  0, 68,  0,194,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_189[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 71,128, 34,  0, 17,  0, 20,128, 75,  0, 72,  0, 68,  0,194,  0, 65,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_190[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 33,  0, 23,128, 21,  0, 11,  0,201,  0, 36,  0, 68,  0, 34,  0,225,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_191[] = {  7,  0, 56, 68, 68, 32, 32, 16, 16,  0, 16,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_192[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0,  8,  0,  8,  0,  0,  0,  8,  0, 16,  0};
    const GLubyte Helvetica12_Character_193[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0,  8,  0,  8,  0,  0,  0,  8,  0,  4,  0};
    const GLubyte Helvetica12_Character_194[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0,  8,  0,  8,  0,  0,  0, 20,  0,  8,  0};
    const GLubyte Helvetica12_Character_195[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0,  8,  0,  8,  0,  0,  0, 20,  0, 10,  0};
    const GLubyte Helvetica12_Character_196[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0,  8,  0,  8,  0,  0,  0, 20,  0,  0,  0};
    const GLubyte Helvetica12_Character_197[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 65,  0, 65,  0, 62,  0, 34,  0, 34,  0, 20,  0,  8,  0,  8,  0,  8,  0, 20,  0,  8,  0};
    const GLubyte Helvetica12_Character_198[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 71,192, 68,  0, 68,  0, 60,  0, 39,192, 36,  0, 20,  0, 20,  0, 15,192,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_199[] = {  9,  0,  0, 24,  0,  4,  0,  4,  0, 30,  0, 33,  0, 64,  0, 64,  0, 64,  0, 64,  0, 64,  0, 33,  0, 30,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_200[] = {  8,  0,  0,  0,  0,126, 64, 64, 64,126, 64, 64, 64,126,  0,  8, 16};
    const GLubyte Helvetica12_Character_201[] = {  8,  0,  0,  0,  0,126, 64, 64, 64,126, 64, 64, 64,126,  0,  8,  4};
    const GLubyte Helvetica12_Character_202[] = {  8,  0,  0,  0,  0,126, 64, 64, 64,126, 64, 64, 64,126,  0, 20,  8};
    const GLubyte Helvetica12_Character_203[] = {  8,  0,  0,  0,  0,126, 64, 64, 64,126, 64, 64, 64,126,  0, 20,  0};
    const GLubyte Helvetica12_Character_204[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0, 64,128};
    const GLubyte Helvetica12_Character_205[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0, 64, 32};
    const GLubyte Helvetica12_Character_206[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,160, 64};
    const GLubyte Helvetica12_Character_207[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,160,  0};
    const GLubyte Helvetica12_Character_208[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,124,  0, 66,  0, 65,  0, 65,  0,241,  0, 65,  0, 65,  0, 66,  0,124,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_209[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 67,  0, 69,  0, 69,  0, 73,  0, 81,  0, 81,  0, 97,  0, 65,  0,  0,  0, 20,  0, 10,  0};
    const GLubyte Helvetica12_Character_210[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,128, 64,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0,  4,  0,  8,  0};
    const GLubyte Helvetica12_Character_211[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,128, 64,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0,  4,  0,  2,  0};
    const GLubyte Helvetica12_Character_212[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,128, 64,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0, 10,  0,  4,  0};
    const GLubyte Helvetica12_Character_213[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,128, 64,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0, 20,  0, 10,  0};
    const GLubyte Helvetica12_Character_214[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 33,  0, 64,128, 64,128, 64,128, 64,128, 64,128, 33,  0, 30,  0,  0,  0, 18,  0,  0,  0};
    const GLubyte Helvetica12_Character_215[] = {  7,  0,  0,  0,  0,  0, 68, 40, 16, 40, 68,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_216[] = { 10,  0,  0,  0,  0,  0,  0,128,  0, 94,  0, 33,  0, 80,128, 72,128, 68,128, 68,128, 66,128, 33,  0, 30,128,  0, 64,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_217[] = {  8,  0,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 66,  0,  8, 16};
    const GLubyte Helvetica12_Character_218[] = {  8,  0,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 66,  0,  8,  4};
    const GLubyte Helvetica12_Character_219[] = {  8,  0,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 66,  0, 20,  8};
    const GLubyte Helvetica12_Character_220[] = {  8,  0,  0,  0,  0, 60, 66, 66, 66, 66, 66, 66, 66, 66,  0, 36,  0};
    const GLubyte Helvetica12_Character_221[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0,  8,  0,  8,  0, 20,  0, 34,  0, 34,  0, 65,  0, 65,  0,  0,  0,  8,  0,  4,  0};
    const GLubyte Helvetica12_Character_222[] = {  8,  0,  0,  0,  0, 64, 64,124, 66, 66, 66,124, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_223[] = {  7,  0,  0,  0,  0, 88, 68, 68, 68, 88, 68, 68, 68, 56,  0,  0,  0};
    const GLubyte Helvetica12_Character_224[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56,  0,  8, 16,  0,  0};
    const GLubyte Helvetica12_Character_225[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56,  0, 16,  8,  0,  0};
    const GLubyte Helvetica12_Character_226[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56,  0, 40, 16,  0,  0};
    const GLubyte Helvetica12_Character_227[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56,  0, 40, 20,  0,  0};
    const GLubyte Helvetica12_Character_228[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56,  0, 40,  0,  0,  0};
    const GLubyte Helvetica12_Character_229[] = {  7,  0,  0,  0,  0, 58, 68, 68, 60,  4, 68, 56, 24, 36, 24,  0,  0};
    const GLubyte Helvetica12_Character_230[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0, 59,128, 68, 64, 68,  0, 63,192,  4, 64, 68, 64, 59,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_231[] = {  7,  0, 48,  8, 16, 56, 68, 64, 64, 64, 68, 56,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_232[] = {  7,  0,  0,  0,  0, 56, 68, 64,124, 68, 68, 56,  0, 16, 32,  0,  0};
    const GLubyte Helvetica12_Character_233[] = {  7,  0,  0,  0,  0, 56, 68, 64,124, 68, 68, 56,  0, 16,  8,  0,  0};
    const GLubyte Helvetica12_Character_234[] = {  7,  0,  0,  0,  0, 56, 68, 64,124, 68, 68, 56,  0, 40, 16,  0,  0};
    const GLubyte Helvetica12_Character_235[] = {  7,  0,  0,  0,  0, 56, 68, 64,124, 68, 68, 56,  0, 40,  0,  0,  0};
    const GLubyte Helvetica12_Character_236[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64,  0, 64,128,  0,  0};
    const GLubyte Helvetica12_Character_237[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64,  0, 64, 32,  0,  0};
    const GLubyte Helvetica12_Character_238[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64,  0,160, 64,  0,  0};
    const GLubyte Helvetica12_Character_239[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64,  0,160,  0,  0,  0};
    const GLubyte Helvetica12_Character_240[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 60,  4, 40, 24, 52,  0,  0};
    const GLubyte Helvetica12_Character_241[] = {  7,  0,  0,  0,  0, 68, 68, 68, 68, 68,100, 88,  0, 40, 20,  0,  0};
    const GLubyte Helvetica12_Character_242[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 56,  0, 16, 32,  0,  0};
    const GLubyte Helvetica12_Character_243[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 56,  0, 16,  8,  0,  0};
    const GLubyte Helvetica12_Character_244[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 56,  0, 40, 16,  0,  0};
    const GLubyte Helvetica12_Character_245[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 56,  0, 40, 20,  0,  0};
    const GLubyte Helvetica12_Character_246[] = {  7,  0,  0,  0,  0, 56, 68, 68, 68, 68, 68, 56,  0, 40,  0,  0,  0};
    const GLubyte Helvetica12_Character_247[] = {  7,  0,  0,  0,  0,  0, 16,  0,124,  0, 16,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_248[] = {  7,  0,  0,  0,  0,184, 68,100, 84, 76, 68, 58,  0,  0,  0,  0,  0};
    const GLubyte Helvetica12_Character_249[] = {  7,  0,  0,  0,  0, 52, 76, 68, 68, 68, 68, 68,  0, 16, 32,  0,  0};
    const GLubyte Helvetica12_Character_250[] = {  7,  0,  0,  0,  0, 52, 76, 68, 68, 68, 68, 68,  0, 16,  8,  0,  0};
    const GLubyte Helvetica12_Character_251[] = {  7,  0,  0,  0,  0, 52, 76, 68, 68, 68, 68, 68,  0, 40, 16,  0,  0};
    const GLubyte Helvetica12_Character_252[] = {  7,  0,  0,  0,  0, 52, 76, 68, 68, 68, 68, 68,  0, 40,  0,  0,  0};
    const GLubyte Helvetica12_Character_253[] = {  7,  0, 64, 32, 16, 16, 40, 40, 72, 68, 68, 68,  0, 16,  8,  0,  0};
    const GLubyte Helvetica12_Character_254[] = {  7,  0, 64, 64, 64, 88,100, 68, 68, 68,100, 88, 64, 64,  0,  0,  0};
    const GLubyte Helvetica12_Character_255[] = {  7,  0, 96, 16, 16, 16, 24, 40, 40, 36, 68, 68,  0, 40,  0,  0,  0};

    /* The font characters mapping: */
    const GLubyte* Helvetica12_Character_Map[] = {Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,
                                                  Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,
                                                  Helvetica12_Character_032,Helvetica12_Character_033,Helvetica12_Character_034,Helvetica12_Character_035,Helvetica12_Character_036,Helvetica12_Character_037,Helvetica12_Character_038,Helvetica12_Character_039,Helvetica12_Character_040,Helvetica12_Character_041,Helvetica12_Character_042,Helvetica12_Character_043,Helvetica12_Character_044,Helvetica12_Character_045,Helvetica12_Character_046,Helvetica12_Character_047,
                                                  Helvetica12_Character_048,Helvetica12_Character_049,Helvetica12_Character_050,Helvetica12_Character_051,Helvetica12_Character_052,Helvetica12_Character_053,Helvetica12_Character_054,Helvetica12_Character_055,Helvetica12_Character_056,Helvetica12_Character_057,Helvetica12_Character_058,Helvetica12_Character_059,Helvetica12_Character_060,Helvetica12_Character_061,Helvetica12_Character_062,Helvetica12_Character_063,
                                                  Helvetica12_Character_064,Helvetica12_Character_065,Helvetica12_Character_066,Helvetica12_Character_067,Helvetica12_Character_068,Helvetica12_Character_069,Helvetica12_Character_070,Helvetica12_Character_071,Helvetica12_Character_072,Helvetica12_Character_073,Helvetica12_Character_074,Helvetica12_Character_075,Helvetica12_Character_076,Helvetica12_Character_077,Helvetica12_Character_078,Helvetica12_Character_079,
                                                  Helvetica12_Character_080,Helvetica12_Character_081,Helvetica12_Character_082,Helvetica12_Character_083,Helvetica12_Character_084,Helvetica12_Character_085,Helvetica12_Character_086,Helvetica12_Character_087,Helvetica12_Character_088,Helvetica12_Character_089,Helvetica12_Character_090,Helvetica12_Character_091,Helvetica12_Character_092,Helvetica12_Character_093,Helvetica12_Character_094,Helvetica12_Character_095,
                                                  Helvetica12_Character_096,Helvetica12_Character_097,Helvetica12_Character_098,Helvetica12_Character_099,Helvetica12_Character_100,Helvetica12_Character_101,Helvetica12_Character_102,Helvetica12_Character_103,Helvetica12_Character_104,Helvetica12_Character_105,Helvetica12_Character_106,Helvetica12_Character_107,Helvetica12_Character_108,Helvetica12_Character_109,Helvetica12_Character_110,Helvetica12_Character_111,
                                                  Helvetica12_Character_112,Helvetica12_Character_113,Helvetica12_Character_114,Helvetica12_Character_115,Helvetica12_Character_116,Helvetica12_Character_117,Helvetica12_Character_118,Helvetica12_Character_119,Helvetica12_Character_120,Helvetica12_Character_121,Helvetica12_Character_122,Helvetica12_Character_123,Helvetica12_Character_124,Helvetica12_Character_125,Helvetica12_Character_126,Helvetica12_Character_032,
                                                  Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,
                                                  Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,Helvetica12_Character_032,
                                                  Helvetica12_Character_160,Helvetica12_Character_161,Helvetica12_Character_162,Helvetica12_Character_163,Helvetica12_Character_164,Helvetica12_Character_165,Helvetica12_Character_166,Helvetica12_Character_167,Helvetica12_Character_168,Helvetica12_Character_169,Helvetica12_Character_170,Helvetica12_Character_171,Helvetica12_Character_172,Helvetica12_Character_173,Helvetica12_Character_174,Helvetica12_Character_175,
                                                  Helvetica12_Character_176,Helvetica12_Character_177,Helvetica12_Character_178,Helvetica12_Character_179,Helvetica12_Character_180,Helvetica12_Character_181,Helvetica12_Character_182,Helvetica12_Character_183,Helvetica12_Character_184,Helvetica12_Character_185,Helvetica12_Character_186,Helvetica12_Character_187,Helvetica12_Character_188,Helvetica12_Character_189,Helvetica12_Character_190,Helvetica12_Character_191,
                                                  Helvetica12_Character_192,Helvetica12_Character_193,Helvetica12_Character_194,Helvetica12_Character_195,Helvetica12_Character_196,Helvetica12_Character_197,Helvetica12_Character_198,Helvetica12_Character_199,Helvetica12_Character_200,Helvetica12_Character_201,Helvetica12_Character_202,Helvetica12_Character_203,Helvetica12_Character_204,Helvetica12_Character_205,Helvetica12_Character_206,Helvetica12_Character_207,
                                                  Helvetica12_Character_208,Helvetica12_Character_209,Helvetica12_Character_210,Helvetica12_Character_211,Helvetica12_Character_212,Helvetica12_Character_213,Helvetica12_Character_214,Helvetica12_Character_215,Helvetica12_Character_216,Helvetica12_Character_217,Helvetica12_Character_218,Helvetica12_Character_219,Helvetica12_Character_220,Helvetica12_Character_221,Helvetica12_Character_222,Helvetica12_Character_223,
                                                  Helvetica12_Character_224,Helvetica12_Character_225,Helvetica12_Character_226,Helvetica12_Character_227,Helvetica12_Character_228,Helvetica12_Character_229,Helvetica12_Character_230,Helvetica12_Character_231,Helvetica12_Character_232,Helvetica12_Character_233,Helvetica12_Character_234,Helvetica12_Character_235,Helvetica12_Character_236,Helvetica12_Character_237,Helvetica12_Character_238,Helvetica12_Character_239,
                                                  Helvetica12_Character_240,Helvetica12_Character_241,Helvetica12_Character_242,Helvetica12_Character_243,Helvetica12_Character_244,Helvetica12_Character_245,Helvetica12_Character_246,Helvetica12_Character_247,Helvetica12_Character_248,Helvetica12_Character_249,Helvetica12_Character_250,Helvetica12_Character_251,Helvetica12_Character_252,Helvetica12_Character_253,Helvetica12_Character_254,Helvetica12_Character_255,NULL};

    /* The font structure: */
    const Font fontHelvetica12 = { "-adobe-helvetica-medium-r-normal--12-120-75-75-p-67-iso8859-1", 256, 16, Helvetica12_Character_Map, 0, 4 };

    const GLubyte Helvetica18_Character_000[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0, 64, 16,  0,  0, 64, 16,  0,  0, 64, 16,  0,  0, 64, 16,  0,  0, 64, 16,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_001[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_002[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_003[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_004[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_005[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_006[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_007[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_008[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_009[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_010[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_011[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_012[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_013[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_014[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_015[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_016[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_017[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_018[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_019[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_020[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_021[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_022[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_023[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_024[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_025[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_026[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_027[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_028[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_029[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_030[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_031[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_032[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_033[] = {  6,  0,  0,  0,  0,  0, 48, 48,  0,  0, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_034[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,144,144,216,216,216,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_035[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 36,  0, 36,  0, 36,  0,255,128,255,128, 18,  0, 18,  0, 18,  0,127,192,127,192,  9,  0,  9,  0,  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_036[] = { 10,  0,  0,  0,  0,  0,  0,  4,  0,  4,  0, 31,  0, 63,128,117,192,100,192,  4,192,  7,128, 31,  0, 60,  0,116,  0,100,  0,101,128, 63,128, 31,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_037[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12, 60, 12,126,  6,102,  6,102,  3,126,  3, 60,  1,128, 61,128,126,192,102,192,102, 96,126, 96, 60, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_038[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30, 56, 63,112,115,224, 97,192, 97,224, 99, 96,119, 96, 62,  0, 30,  0, 51,  0, 51,  0, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_039[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 32, 32, 96, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_040[] = {  6,  0,  8, 24, 48, 48, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48, 48, 24,  8,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_041[] = {  6,  0, 64, 96, 48, 48, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 48, 48, 96, 64,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_042[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 68, 56, 56,124, 16, 16,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_043[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0, 12,  0, 12,  0,127,128,127,128, 12,  0, 12,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_044[] = {  5,  0,  0, 64, 32, 32, 96, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_045[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,127,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_046[] = {  5,  0,  0,  0,  0,  0, 96, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_047[] = {  5,  0,  0,  0,  0,  0,192,192, 64, 64, 96, 96, 32, 32, 48, 48, 16, 16, 24, 24,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_048[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,  0, 51,  0, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 51,  0, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_049[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0, 62,  0, 62,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_050[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,127,128, 96,  0,112,  0, 56,  0, 28,  0, 14,  0,  7,  0,  3,128,  1,128, 97,128,127,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_051[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,  0, 99,128, 97,128,  1,128,  3,128, 15,  0, 14,  0,  3,  0, 97,128, 97,128, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_052[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,128,  1,128,  1,128,127,192,127,192, 97,128, 49,128, 25,128, 25,128, 13,128,  7,128,  3,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_053[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,127,  0, 99,128, 97,128,  1,128,  1,128, 99,128,127,  0,126,  0, 96,  0, 96,  0,127,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_054[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,  0,113,128, 97,128, 97,128, 97,128,127,  0,110,  0, 96,  0, 96,  0, 49,128, 63,128, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_055[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48,  0, 48,  0, 24,  0, 24,  0, 24,  0, 12,  0, 12,  0,  6,  0,  6,  0,  3,  0,  1,128,127,128,127,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_056[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,  0,115,128, 97,128, 97,128, 51,  0, 63,  0, 51,  0, 97,128, 97,128,115,128, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_057[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 62,  0,127,  0, 99,  0,  1,128,  1,128, 29,128, 63,128, 97,128, 97,128, 97,128, 99,128, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_058[] = {  5,  0,  0,  0,  0,  0, 96, 96,  0,  0,  0,  0,  0,  0, 96, 96,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_059[] = {  5,  0,  0, 64, 32, 32, 96, 96,  0,  0,  0,  0,  0,  0, 96, 96,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_060[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,128,  7,128, 30,  0, 56,  0, 96,  0, 56,  0, 30,  0,  7,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_061[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63,128, 63,128,  0,  0,  0,  0, 63,128, 63,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_062[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,  0,120,  0, 30,  0,  7,  0,  1,128,  7,  0, 30,  0,120,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_063[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,  0, 24,  0,  0,  0,  0,  0, 24,  0, 24,  0, 24,  0, 28,  0, 14,  0,  7,  0, 99,  0, 99,  0,127,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_064[] = { 18,  0,  0,  0,  0,  0,  0,  3,240,  0, 15,248,  0, 28,  0,  0, 56,  0,  0, 51,184,  0,103,252,  0,102,102,  0,102, 51,  0,102, 51,  0,102, 49,128, 99, 25,128, 51,185,128, 49,217,128, 24,  3,  0, 14,  7,  0,  7,254,  0,  1,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_065[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_066[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,224, 96,112, 96, 48, 96, 48, 96,112,127,224,127,192, 96,192, 96, 96, 96, 96, 96,224,127,192,127,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_067[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112,  0, 96,  0, 96,  0, 96,  0, 96,  0,112,  0, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_068[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,127,192, 96,224, 96, 96, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 96, 96,224,127,192,127,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_069[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,192, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0,127,192,127,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_070[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0,127,192,127,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_071[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,216, 31,248, 56, 56, 48, 24,112, 24, 96,248, 96,248, 96,  0, 96,  0,112, 24, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_072[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,127,240,127,240, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_073[] = {  6,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_074[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,  0,115,128, 97,128, 97,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_075[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 56, 96,112, 96,224, 97,192, 99,128,103,  0,126,  0,124,  0,110,  0,103,  0, 99,128, 97,192, 96,224, 96,112,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_076[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_077[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97,134, 97,134, 99,198, 98, 70,102,102,102,102,108, 54,108, 54,120, 30,120, 30,112, 14,112, 14, 96,  6, 96,  6,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_078[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 48, 96,112, 96,240, 96,240, 97,176, 99, 48, 99, 48,102, 48,102, 48,108, 48,120, 48,120, 48,112, 48, 96, 48,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_079[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112, 28, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_080[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,192, 96,224, 96, 96, 96, 96, 96,224,127,192,127,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_081[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,  7,216, 31,240, 56,120, 48,216,112,220, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_082[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96,192, 96,192,127,128,127,192, 96,224, 96, 96, 96, 96, 96,224,127,192,127,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_083[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,128, 63,224,112,112, 96, 48,  0, 48,  0,112,  1,224, 15,128, 62,  0,112,  0, 96, 48,112,112, 63,224, 15,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_084[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,127,224,127,224,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_085[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,128, 63,224, 48, 96, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_086[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  7,128,  7,128, 12,192, 12,192, 12,192, 24, 96, 24, 96, 24, 96, 48, 48, 48, 48, 48, 48, 96, 24, 96, 24,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_087[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12, 12,  0, 12, 12,  0, 14, 28,  0, 26, 22,  0, 27, 54,  0, 27, 54,  0, 51, 51,  0, 51, 51,  0, 49, 35,  0, 49,227,  0, 97,225,128, 96,193,128, 96,193,128, 96,193,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_088[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 48,112,112, 48, 96, 56,224, 24,192, 13,128,  7,  0,  7,  0, 13,128, 24,192, 56,224, 48, 96,112,112, 96, 48,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_089[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  7,128, 12,192, 24, 96, 24, 96, 48, 48, 48, 48, 96, 24, 96, 24,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_090[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,224,127,224, 96,  0, 48,  0, 24,  0, 12,  0, 14,  0,  6,  0,  3,  0,  1,128,  0,192,  0, 96,127,224,127,224,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_091[] = {  5,  0,120,120, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,120,120,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_092[] = {  5,  0,  0,  0,  0,  0, 24, 24, 16, 16, 48, 48, 32, 32, 96, 96, 64, 64,192,192,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_093[] = {  5,  0,240,240, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,240,240,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_094[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 65,  0, 99,  0, 54,  0, 28,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_095[] = { 10,  0,  0,255,192,255,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_096[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 96, 64, 64, 32,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_097[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_098[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,111,  0,127,128,113,128, 96,192, 96,192, 96,192, 96,192,113,128,127,128,111,  0, 96,  0, 96,  0, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_099[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,  0, 96,  0, 96,  0, 96,  0, 49,128, 63,128, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_100[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,192, 63,192, 49,192, 96,192, 96,192, 96,192, 96,192, 49,192, 63,192, 30,192,  0,192,  0,192,  0,192,  0,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_101[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,128,113,128, 96,  0, 96,  0,127,128, 97,128, 97,128, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_102[] = {  6,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48,252,252, 48, 48, 60, 28,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_103[] = { 11,  0,  0, 14,  0, 63,128, 49,128,  0,192, 30,192, 63,192, 49,192, 96,192, 96,192, 96,192, 96,192, 48,192, 63,192, 30,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_104[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,113,128,111,128,103,  0, 96,  0, 96,  0, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_105[] = {  4,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,  0, 96, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_106[] = {  4,  0,192,224, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,  0, 96, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_107[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 99,128, 99,  0,103,  0,102,  0,108,  0,124,  0,120,  0,108,  0,102,  0, 99,  0, 96,  0, 96,  0, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_108[] = {  4,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_109[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 99, 24, 99, 24, 99, 24, 99, 24, 99, 24, 99, 24, 99, 24,115,152,111,120,102, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_110[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,113,128,111,128,103,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_111[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_112[] = { 11,  0,  0, 96,  0, 96,  0, 96,  0, 96,  0,111,  0,127,128,113,128, 96,192, 96,192, 96,192, 96,192,113,128,127,128,111,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_113[] = { 11,  0,  0,  0,192,  0,192,  0,192,  0,192, 30,192, 63,192, 49,192, 96,192, 96,192, 96,192, 96,192, 49,192, 63,192, 30,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_114[] = {  6,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96,112,108,108,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_115[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,126,  0, 99,  0,  3,  0, 31,  0,126,  0, 96,  0, 99,  0, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_116[] = {  6,  0,  0,  0,  0,  0, 24, 56, 48, 48, 48, 48, 48, 48,252,252, 48, 48, 48,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_117[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 57,128,125,128, 99,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_118[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0, 30,  0, 18,  0, 51,  0, 51,  0, 51,  0, 97,128, 97,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_119[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,192, 12,192, 28,224, 20,160, 52,176, 51, 48, 51, 48, 99, 24, 99, 24, 99, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_120[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97,128,115,128, 51,  0, 30,  0, 12,  0, 12,  0, 30,  0, 51,  0,115,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_121[] = { 10,  0,  0, 56,  0, 56,  0, 12,  0, 12,  0, 12,  0, 12,  0, 30,  0, 18,  0, 51,  0, 51,  0, 51,  0, 97,128, 97,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_122[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,127,  0, 96,  0, 48,  0, 24,  0, 12,  0,  6,  0,  3,  0,127,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_123[] = {  6,  0, 12, 24, 48, 48, 48, 48, 48, 48, 96,192, 96, 48, 48, 48, 48, 48, 24, 12,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_124[] = {  4,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_125[] = {  6,  0,192, 96, 48, 48, 48, 48, 48, 48, 24, 12, 24, 48, 48, 48, 48, 48, 96,192,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_126[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,102,  0, 63,  0, 25,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_127[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_128[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_129[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_130[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_131[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_132[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_133[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_134[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_135[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_136[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_137[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_138[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_139[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_140[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_141[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_142[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_143[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_144[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_145[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_146[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_147[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_148[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_149[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_150[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_151[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_152[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_153[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_154[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_155[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_156[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_157[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_158[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_159[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 64, 16,  0,  0,  0,  0, 85, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_160[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_161[] = {  6,  0, 48, 48, 48, 48, 48, 48, 48, 48, 16, 16,  0,  0, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_162[] = { 10,  0,  0,  0,  0,  0,  0,  8,  0,  8,  0, 31,  0, 63,128, 53,128,100,  0,100,  0,100,  0,100,  0, 53,128, 63,128, 31,  0,  2,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_163[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,223,  0,255,128, 96,128, 48,  0, 24,  0, 24,  0,126,  0, 48,  0, 96,  0, 97,128, 97,128, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_164[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97,128,127,128, 51,  0, 51,  0, 51,  0,127,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_165[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0, 12,  0, 12,  0,127,128, 12,  0,127,128, 30,  0, 51,  0, 51,  0, 51,  0, 97,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_166[] = {  4,  0,  0, 96, 96, 96, 96, 96, 96,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_167[] = { 10,  0,  0, 30,  0, 63,  0, 97,128, 97,128,  3,128,  7,  0, 31,  0, 57,128,113,128, 97,128, 99,128, 55,  0, 62,  0,120,  0, 97,128, 97,128, 63,  0, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_168[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,216,216,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_169[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 24, 48, 32,  8, 35,136, 68, 68, 72,  4, 72,  4, 72,  4, 68, 68, 35,136, 32,  8, 24, 48,  7,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_170[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  0, 52,108, 36, 28,100, 56,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_171[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,  0, 27,  0, 54,  0,108,  0,108,  0, 54,  0, 27,  0,  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_172[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,  0,192,  0,192,127,192,127,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_173[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,124,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_174[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 24, 48, 32,  8, 36, 40, 68, 68, 68,132, 71,196, 68, 36, 68, 36, 39,200, 32,  8, 24, 48,  7,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_175[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_176[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,108, 68,108, 56,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_177[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,127,128,  0,  0, 12,  0, 12,  0, 12,  0,127,128,127,128, 12,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_178[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,248, 96, 48, 24,152,248,112,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_179[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,112,248,152, 48, 48,152,248,112,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_180[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 96, 48,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_181[] = { 10,  0,  0, 96,  0, 96,  0, 96,  0, 96,  0,109,128,127,128,115,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_182[] = { 10,  0,  0,  9,  0,  9,  0,  9,  0,  9,  0,  9,  0,  9,  0,  9,  0,  9,  0,  9,  0,  9,  0, 25,  0, 57,  0,121,  0,121,  0,121,  0,121,  0, 57,  0, 31,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_183[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_184[] = {  5,  0,240,216, 24,112, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_185[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48,112,112, 48,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_186[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  0, 56,108, 68, 68,108, 56,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_187[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 72,  0,108,  0, 54,  0, 27,  0, 27,  0, 54,  0,108,  0, 72,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_188[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 24, 24, 24, 12,252,  6,216,  6,120, 51, 56, 49, 24, 49,136, 48,192, 48,192,112, 96,112, 48, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_189[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,124, 24,124, 12, 48,  6, 24,  6, 12, 51, 76, 49,124, 49,184, 48,192, 48,192,112, 96,112, 48, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_190[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 24, 24, 24, 12,252,  6,216,  6,120,115, 56,249, 24,153,136, 48,192, 48,192,152, 96,248, 48,112, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_191[] = { 10,  0,  0, 62,  0,127,  0, 99,  0, 99,  0,112,  0, 56,  0, 28,  0, 12,  0, 12,  0, 12,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_192[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0,  0,  0,  6,  0, 12,  0, 24,  0};
    const GLubyte Helvetica18_Character_193[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0,  0,  0,  6,  0,  3,  0,  1,128};
    const GLubyte Helvetica18_Character_194[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0,  0,  0, 25,128, 15,  0,  6,  0};
    const GLubyte Helvetica18_Character_195[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0,  0,  0, 19,  0, 22,128, 12,128};
    const GLubyte Helvetica18_Character_196[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0,  0,  0, 25,128, 25,128,  0,  0};
    const GLubyte Helvetica18_Character_197[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192, 48,192, 48, 96, 96, 96, 96,127,224, 63,192, 48,192, 48,192, 25,128, 25,128, 15,  0, 15,  0,  6,  0,  6,  0, 15,  0, 25,128, 25,128, 15,  0};
    const GLubyte Helvetica18_Character_198[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,255,128, 96,255,128, 48,192,  0, 48,192,  0, 63,192,  0, 31,192,  0, 24,255,  0, 24,255,  0, 12,192,  0, 12,192,  0,  6,192,  0,  6,192,  0,  3,255,128,  3,255,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_199[] = { 14,  0,  0, 15,  0, 13,128,  1,128,  7,  0,  7,192, 31,240, 56, 56, 48, 24,112,  0, 96,  0, 96,  0, 96,  0, 96,  0,112,  0, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_200[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,192, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0,127,192,127,192,  0,  0,  6,  0, 12,  0, 24,  0};
    const GLubyte Helvetica18_Character_201[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,192, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0,127,192,127,192,  0,  0,  6,  0,  3,  0,  1,128};
    const GLubyte Helvetica18_Character_202[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,192, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0,127,192,127,192,  0,  0, 25,128, 15,  0,  6,  0};
    const GLubyte Helvetica18_Character_203[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,192, 96,  0, 96,  0, 96,  0, 96,  0,127,128,127,128, 96,  0, 96,  0, 96,  0, 96,  0,127,192,127,192,  0,  0, 25,128, 25,128,  0,  0};
    const GLubyte Helvetica18_Character_204[] = {  6,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,  0, 48, 96,192};
    const GLubyte Helvetica18_Character_205[] = {  6,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,  0, 48, 24, 12};
    const GLubyte Helvetica18_Character_206[] = {  6,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,  0,204,120, 48};
    const GLubyte Helvetica18_Character_207[] = {  6,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,  0,204,204,  0};
    const GLubyte Helvetica18_Character_208[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,127,192, 96,224, 96, 96, 96, 48, 96, 48,252, 48,252, 48, 96, 48, 96, 48, 96, 96, 96,224,127,192,127,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_209[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 48, 96,112, 96,240, 96,240, 97,176, 99, 48, 99, 48,102, 48,102, 48,108, 48,108, 48,120, 48,112, 48,112, 48,  0,  0,  9,128, 11, 64,  6, 64};
    const GLubyte Helvetica18_Character_210[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112, 28, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  1,128,  3,  0,  6,  0};
    const GLubyte Helvetica18_Character_211[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112, 28, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  1,128,  0,192,  0, 96};
    const GLubyte Helvetica18_Character_212[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112, 28, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  6, 96,  3,192,  1,128};
    const GLubyte Helvetica18_Character_213[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112, 28, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  4,192,  5,160,  3, 32};
    const GLubyte Helvetica18_Character_214[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,192, 31,240, 56, 56, 48, 24,112, 28, 96, 12, 96, 12, 96, 12, 96, 12,112, 28, 48, 24, 56, 56, 31,240,  7,192,  0,  0,  6,192,  6,192,  0,  0};
    const GLubyte Helvetica18_Character_215[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,192, 97,128, 51,  0, 30,  0, 12,  0, 30,  0, 51,  0, 97,128,192,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_216[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,199,192,255,240,120, 56, 56, 24,108, 28,110, 12,103, 12, 99,140, 97,204,112,220, 48,120, 56, 56, 31,252,  7,204,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_217[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,128, 63,224, 48, 96, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,  0,  0,  3,  0,  6,  0, 12,  0};
    const GLubyte Helvetica18_Character_218[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,128, 63,224, 48, 96, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,  0,  0,  6,  0,  3,  0,  1,128};
    const GLubyte Helvetica18_Character_219[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,128, 63,224, 48, 96, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,  0,  0, 12,192,  7,128,  3,  0};
    const GLubyte Helvetica18_Character_220[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,128, 63,224, 48, 96, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,  0,  0, 12,192, 12,192,  0,  0};
    const GLubyte Helvetica18_Character_221[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  7,128, 12,192, 24, 96, 24, 96, 48, 48, 48, 48, 96, 24, 96, 24,  0,  0,  3,  0,  1,128,  0,192};
    const GLubyte Helvetica18_Character_222[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,  0, 96,  0, 96,  0,127,128,127,192, 96,224, 96, 96, 96, 96, 96,224,127,192,127,128, 96,  0, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_223[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,110,  0,111,  0, 99,  0, 99,  0, 99,  0, 99,  0,110,  0,110,  0, 99,  0, 99,  0, 99,  0, 99,  0, 62,  0, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_224[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0,  0,  0, 12,  0, 24,  0, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_225[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0,  0,  0, 24,  0, 12,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_226[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0,  0,  0, 51,  0, 30,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_227[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0,  0,  0, 38,  0, 45,  0, 25,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_228[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0,  0,  0, 54,  0, 54,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_229[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 59,  0,119,  0, 99,  0, 99,  0,115,  0, 63,  0,  7,  0, 99,  0,119,  0, 62,  0, 28,  0, 54,  0, 54,  0, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_230[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 58,240,119,252, 99,140, 99,  0,115,  0, 63,252,  7, 12, 99, 12,119,248, 62,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_231[] = { 10,  0,  0, 60,  0, 54,  0,  6,  0, 28,  0, 31,  0, 63,128, 49,128, 96,  0, 96,  0, 96,  0, 96,  0, 49,128, 63,128, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_232[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,128,113,128, 96,  0, 96,  0,127,128, 97,128, 97,128, 63,  0, 30,  0,  0,  0, 12,  0, 24,  0, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_233[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,128,113,128, 96,  0, 96,  0,127,128, 97,128, 97,128, 63,  0, 30,  0,  0,  0, 12,  0,  6,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_234[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,128,113,128, 96,  0, 96,  0,127,128, 97,128, 97,128, 63,  0, 30,  0,  0,  0, 51,  0, 30,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_235[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0, 63,128,113,128, 96,  0, 96,  0,127,128, 97,128, 97,128, 63,  0, 30,  0,  0,  0, 27,  0, 27,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_236[] = {  4,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0, 48, 96,192,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_237[] = {  4,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,192, 96, 48,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_238[] = {  4,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,144,240, 96,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_239[] = {  4,  0,  0,  0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,216,216,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_240[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0, 38,  0, 28,  0, 27,  0, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_241[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,113,128,111,128,103,  0,  0,  0, 38,  0, 45,  0, 25,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_242[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0,  0,  0,  6,  0, 12,  0, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_243[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0,  0,  0, 12,  0,  6,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_244[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0,  0,  0, 25,128, 15,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_245[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0,  0,  0, 19,  0, 22,128, 12,128,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_246[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0, 63,128, 49,128, 96,192, 96,192, 96,192, 96,192, 49,128, 63,128, 31,  0,  0,  0, 27,  0, 27,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_247[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,127,128,127,128,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_248[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,206,  0,127,128, 49,128,120,192,108,192,102,192, 99,192, 49,128, 63,192, 14, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_249[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 57,128,125,128, 99,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,  0,  0,  6,  0, 12,  0, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_250[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 57,128,125,128, 99,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,  0,  0, 12,  0,  6,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_251[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 57,128,125,128, 99,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,  0,  0, 51,  0, 30,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_252[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 57,128,125,128, 99,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128, 97,128,  0,  0, 51,  0, 51,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_253[] = { 10,  0,  0, 56,  0, 56,  0, 12,  0, 12,  0, 12,  0, 12,  0, 30,  0, 18,  0, 51,  0, 51,  0, 51,  0, 97,128, 97,128, 97,128,  0,  0, 12,  0,  6,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_254[] = { 11,  0,  0, 96,  0, 96,  0, 96,  0, 96,  0,111,  0,127,128,113,128, 96,192, 96,192, 96,192, 96,192,113,128,127,128,111,  0, 96,  0, 96,  0, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte Helvetica18_Character_255[] = { 10,  0,  0, 56,  0, 56,  0, 12,  0, 12,  0, 12,  0, 12,  0, 30,  0, 18,  0, 51,  0, 51,  0, 51,  0, 97,128, 97,128, 97,128,  0,  0, 51,  0, 51,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};

    /* The font characters mapping: */
    const GLubyte* Helvetica18_Character_Map[] = {Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,
                                                  Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,
                                                  Helvetica18_Character_032,Helvetica18_Character_033,Helvetica18_Character_034,Helvetica18_Character_035,Helvetica18_Character_036,Helvetica18_Character_037,Helvetica18_Character_038,Helvetica18_Character_039,Helvetica18_Character_040,Helvetica18_Character_041,Helvetica18_Character_042,Helvetica18_Character_043,Helvetica18_Character_044,Helvetica18_Character_045,Helvetica18_Character_046,Helvetica18_Character_047,
                                                  Helvetica18_Character_048,Helvetica18_Character_049,Helvetica18_Character_050,Helvetica18_Character_051,Helvetica18_Character_052,Helvetica18_Character_053,Helvetica18_Character_054,Helvetica18_Character_055,Helvetica18_Character_056,Helvetica18_Character_057,Helvetica18_Character_058,Helvetica18_Character_059,Helvetica18_Character_060,Helvetica18_Character_061,Helvetica18_Character_062,Helvetica18_Character_063,
                                                  Helvetica18_Character_064,Helvetica18_Character_065,Helvetica18_Character_066,Helvetica18_Character_067,Helvetica18_Character_068,Helvetica18_Character_069,Helvetica18_Character_070,Helvetica18_Character_071,Helvetica18_Character_072,Helvetica18_Character_073,Helvetica18_Character_074,Helvetica18_Character_075,Helvetica18_Character_076,Helvetica18_Character_077,Helvetica18_Character_078,Helvetica18_Character_079,
                                                  Helvetica18_Character_080,Helvetica18_Character_081,Helvetica18_Character_082,Helvetica18_Character_083,Helvetica18_Character_084,Helvetica18_Character_085,Helvetica18_Character_086,Helvetica18_Character_087,Helvetica18_Character_088,Helvetica18_Character_089,Helvetica18_Character_090,Helvetica18_Character_091,Helvetica18_Character_092,Helvetica18_Character_093,Helvetica18_Character_094,Helvetica18_Character_095,
                                                  Helvetica18_Character_096,Helvetica18_Character_097,Helvetica18_Character_098,Helvetica18_Character_099,Helvetica18_Character_100,Helvetica18_Character_101,Helvetica18_Character_102,Helvetica18_Character_103,Helvetica18_Character_104,Helvetica18_Character_105,Helvetica18_Character_106,Helvetica18_Character_107,Helvetica18_Character_108,Helvetica18_Character_109,Helvetica18_Character_110,Helvetica18_Character_111,
                                                  Helvetica18_Character_112,Helvetica18_Character_113,Helvetica18_Character_114,Helvetica18_Character_115,Helvetica18_Character_116,Helvetica18_Character_117,Helvetica18_Character_118,Helvetica18_Character_119,Helvetica18_Character_120,Helvetica18_Character_121,Helvetica18_Character_122,Helvetica18_Character_123,Helvetica18_Character_124,Helvetica18_Character_125,Helvetica18_Character_126,Helvetica18_Character_032,
                                                  Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,
                                                  Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,Helvetica18_Character_032,
                                                  Helvetica18_Character_160,Helvetica18_Character_161,Helvetica18_Character_162,Helvetica18_Character_163,Helvetica18_Character_164,Helvetica18_Character_165,Helvetica18_Character_166,Helvetica18_Character_167,Helvetica18_Character_168,Helvetica18_Character_169,Helvetica18_Character_170,Helvetica18_Character_171,Helvetica18_Character_172,Helvetica18_Character_173,Helvetica18_Character_174,Helvetica18_Character_175,
                                                  Helvetica18_Character_176,Helvetica18_Character_177,Helvetica18_Character_178,Helvetica18_Character_179,Helvetica18_Character_180,Helvetica18_Character_181,Helvetica18_Character_182,Helvetica18_Character_183,Helvetica18_Character_184,Helvetica18_Character_185,Helvetica18_Character_186,Helvetica18_Character_187,Helvetica18_Character_188,Helvetica18_Character_189,Helvetica18_Character_190,Helvetica18_Character_191,
                                                  Helvetica18_Character_192,Helvetica18_Character_193,Helvetica18_Character_194,Helvetica18_Character_195,Helvetica18_Character_196,Helvetica18_Character_197,Helvetica18_Character_198,Helvetica18_Character_199,Helvetica18_Character_200,Helvetica18_Character_201,Helvetica18_Character_202,Helvetica18_Character_203,Helvetica18_Character_204,Helvetica18_Character_205,Helvetica18_Character_206,Helvetica18_Character_207,
                                                  Helvetica18_Character_208,Helvetica18_Character_209,Helvetica18_Character_210,Helvetica18_Character_211,Helvetica18_Character_212,Helvetica18_Character_213,Helvetica18_Character_214,Helvetica18_Character_215,Helvetica18_Character_216,Helvetica18_Character_217,Helvetica18_Character_218,Helvetica18_Character_219,Helvetica18_Character_220,Helvetica18_Character_221,Helvetica18_Character_222,Helvetica18_Character_223,
                                                  Helvetica18_Character_224,Helvetica18_Character_225,Helvetica18_Character_226,Helvetica18_Character_227,Helvetica18_Character_228,Helvetica18_Character_229,Helvetica18_Character_230,Helvetica18_Character_231,Helvetica18_Character_232,Helvetica18_Character_233,Helvetica18_Character_234,Helvetica18_Character_235,Helvetica18_Character_236,Helvetica18_Character_237,Helvetica18_Character_238,Helvetica18_Character_239,
                                                  Helvetica18_Character_240,Helvetica18_Character_241,Helvetica18_Character_242,Helvetica18_Character_243,Helvetica18_Character_244,Helvetica18_Character_245,Helvetica18_Character_246,Helvetica18_Character_247,Helvetica18_Character_248,Helvetica18_Character_249,Helvetica18_Character_250,Helvetica18_Character_251,Helvetica18_Character_252,Helvetica18_Character_253,Helvetica18_Character_254,Helvetica18_Character_255,NULL};

    /* The font structure: */
    const Font fontHelvetica18 = { "-adobe-helvetica-medium-r-normal--18-180-75-75-p-98-iso8859-1", 256, 23, Helvetica18_Character_Map, 0, 5 };

    const GLubyte TimesRoman10_Character_000[] = {  8,  0,  0,  0,  0,170,  0,130,  0,130,  0,170,  0,  0,  0};
    const GLubyte TimesRoman10_Character_001[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_002[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_003[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_004[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_005[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_006[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_007[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_008[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_009[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_010[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_011[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_012[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_013[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_014[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_015[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_016[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_017[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_018[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_019[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_020[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_021[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_022[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_023[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_024[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_025[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_026[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_027[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_028[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_029[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_030[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_031[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_032[] = {  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_033[] = {  3,  0,  0,  0,  0, 64,  0, 64, 64, 64, 64, 64,  0,  0,  0};
    const GLubyte TimesRoman10_Character_034[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,160,160,  0,  0,  0};
    const GLubyte TimesRoman10_Character_035[] = {  5,  0,  0,  0,  0, 80, 80,248, 80,248, 80, 80,  0,  0,  0};
    const GLubyte TimesRoman10_Character_036[] = {  5,  0,  0,  0, 32,224,144, 16, 96,128,144,112, 32,  0,  0};
    const GLubyte TimesRoman10_Character_037[] = {  8,  0,  0,  0,  0, 68, 42, 42, 86,168,164,126,  0,  0,  0};
    const GLubyte TimesRoman10_Character_038[] = {  8,  0,  0,  0,  0,118,141,152,116,110, 80, 48,  0,  0,  0};
    const GLubyte TimesRoman10_Character_039[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,192,  0,  0,  0};
    const GLubyte TimesRoman10_Character_040[] = {  4,  0,  0, 32, 64, 64,128,128,128, 64, 64, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_041[] = {  4,  0,  0,128, 64, 64, 32, 32, 32, 64, 64,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_042[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,160, 64,160,  0,  0,  0};
    const GLubyte TimesRoman10_Character_043[] = {  6,  0,  0,  0,  0, 32, 32,248, 32, 32,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_044[] = {  3,  0,  0, 64, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_045[] = {  7,  0,  0,  0,  0,  0,  0,120,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_046[] = {  3,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_047[] = {  3,  0,  0,  0,  0,128,128, 64, 64, 64, 32, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_048[] = {  5,  0,  0,  0,  0, 96,144,144,144,144,144, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_049[] = {  5,  0,  0,  0,  0,112, 32, 32, 32, 32, 96, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_050[] = {  5,  0,  0,  0,  0,240, 64, 32, 32, 16,144, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_051[] = {  5,  0,  0,  0,  0,224, 16, 16, 96, 16,144, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_052[] = {  5,  0,  0,  0,  0, 16, 16,248,144, 80, 48, 16,  0,  0,  0};
    const GLubyte TimesRoman10_Character_053[] = {  5,  0,  0,  0,  0,224,144, 16, 16,224, 64,112,  0,  0,  0};
    const GLubyte TimesRoman10_Character_054[] = {  5,  0,  0,  0,  0, 96,144,144,144,224, 64, 48,  0,  0,  0};
    const GLubyte TimesRoman10_Character_055[] = {  5,  0,  0,  0,  0, 64, 64, 64, 32, 32,144,240,  0,  0,  0};
    const GLubyte TimesRoman10_Character_056[] = {  5,  0,  0,  0,  0, 96,144,144, 96,144,144, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_057[] = {  5,  0,  0,  0,  0,192, 32,112,144,144,144, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_058[] = {  3,  0,  0,  0,  0, 64,  0,  0,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_059[] = {  3,  0,  0, 64, 64, 64,  0,  0,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_060[] = {  5,  0,  0,  0,  0, 16, 32, 64, 32, 16,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_061[] = {  6,  0,  0,  0,  0,  0,248,  0,248,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_062[] = {  5,  0,  0,  0,  0,128, 64, 32, 64,128,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_063[] = {  4,  0,  0,  0,  0, 64,  0, 64, 64, 32,160,224,  0,  0,  0};
    const GLubyte TimesRoman10_Character_064[] = {  9,  0,  0,  0,  0, 62,  0, 64,  0,146,  0,173,  0,165,  0,165,  0,157,  0, 66,  0, 60,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_065[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16,  0,  0,  0};
    const GLubyte TimesRoman10_Character_066[] = {  6,  0,  0,  0,  0,240, 72, 72,112, 72, 72,240,  0,  0,  0};
    const GLubyte TimesRoman10_Character_067[] = {  7,  0,  0,  0,  0,120,196,128,128,128,196,124,  0,  0,  0};
    const GLubyte TimesRoman10_Character_068[] = {  7,  0,  0,  0,  0,248, 76, 68, 68, 68, 76,248,  0,  0,  0};
    const GLubyte TimesRoman10_Character_069[] = {  6,  0,  0,  0,  0,248, 72, 64,112, 64, 72,248,  0,  0,  0};
    const GLubyte TimesRoman10_Character_070[] = {  6,  0,  0,  0,  0,224, 64, 64,112, 64, 72,248,  0,  0,  0};
    const GLubyte TimesRoman10_Character_071[] = {  7,  0,  0,  0,  0,120,196,132,156,128,196,124,  0,  0,  0};
    const GLubyte TimesRoman10_Character_072[] = {  8,  0,  0,  0,  0,238, 68, 68,124, 68, 68,238,  0,  0,  0};
    const GLubyte TimesRoman10_Character_073[] = {  4,  0,  0,  0,  0,224, 64, 64, 64, 64, 64,224,  0,  0,  0};
    const GLubyte TimesRoman10_Character_074[] = {  4,  0,  0,  0,  0,192,160, 32, 32, 32, 32,112,  0,  0,  0};
    const GLubyte TimesRoman10_Character_075[] = {  7,  0,  0,  0,  0,236, 72, 80, 96, 80, 72,236,  0,  0,  0};
    const GLubyte TimesRoman10_Character_076[] = {  6,  0,  0,  0,  0,248, 72, 64, 64, 64, 64,224,  0,  0,  0};
    const GLubyte TimesRoman10_Character_077[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,235,128, 73,  0, 85,  0, 85,  0, 99,  0, 99,  0,227,128,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_078[] = {  8,  0,  0,  0,  0,228, 76, 76, 84, 84,100,238,  0,  0,  0};
    const GLubyte TimesRoman10_Character_079[] = {  7,  0,  0,  0,  0,120,204,132,132,132,204,120,  0,  0,  0};
    const GLubyte TimesRoman10_Character_080[] = {  6,  0,  0,  0,  0,224, 64, 64,112, 72, 72,240,  0,  0,  0};
    const GLubyte TimesRoman10_Character_081[] = {  7,  0,  0, 12, 24,112,204,132,132,132,204,120,  0,  0,  0};
    const GLubyte TimesRoman10_Character_082[] = {  7,  0,  0,  0,  0,236, 72, 80,112, 72, 72,240,  0,  0,  0};
    const GLubyte TimesRoman10_Character_083[] = {  5,  0,  0,  0,  0,224,144, 16, 96,192,144,112,  0,  0,  0};
    const GLubyte TimesRoman10_Character_084[] = {  6,  0,  0,  0,  0,112, 32, 32, 32, 32,168,248,  0,  0,  0};
    const GLubyte TimesRoman10_Character_085[] = {  8,  0,  0,  0,  0, 56,108, 68, 68, 68, 68,238,  0,  0,  0};
    const GLubyte TimesRoman10_Character_086[] = {  8,  0,  0,  0,  0, 16, 16, 40, 40,108, 68,238,  0,  0,  0};
    const GLubyte TimesRoman10_Character_087[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 34,  0, 85,  0, 85,  0,201,128,136,128,221,192,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_088[] = {  8,  0,  0,  0,  0,238, 68, 40, 16, 40, 68,238,  0,  0,  0};
    const GLubyte TimesRoman10_Character_089[] = {  8,  0,  0,  0,  0, 56, 16, 16, 40, 40, 68,238,  0,  0,  0};
    const GLubyte TimesRoman10_Character_090[] = {  6,  0,  0,  0,  0,248,136, 64, 32, 16,136,248,  0,  0,  0};
    const GLubyte TimesRoman10_Character_091[] = {  3,  0,  0,192,128,128,128,128,128,128,128,192,  0,  0,  0};
    const GLubyte TimesRoman10_Character_092[] = {  3,  0,  0,  0,  0, 32, 32, 64, 64, 64,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_093[] = {  3,  0,  0,192, 64, 64, 64, 64, 64, 64, 64,192,  0,  0,  0};
    const GLubyte TimesRoman10_Character_094[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0, 80, 80, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_095[] = {  5,  0,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_096[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,128,  0,  0};
    const GLubyte TimesRoman10_Character_097[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_098[] = {  5,  0,  0,  0,  0,224,144,144,144,224,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_099[] = {  4,  0,  0,  0,  0, 96,128,128,128, 96,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_100[] = {  5,  0,  0,  0,  0,104,144,144,144,112, 16, 48,  0,  0,  0};
    const GLubyte TimesRoman10_Character_101[] = {  4,  0,  0,  0,  0, 96,128,192,160, 96,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_102[] = {  4,  0,  0,  0,  0,224, 64, 64, 64,224, 64, 48,  0,  0,  0};
    const GLubyte TimesRoman10_Character_103[] = {  5,  0,  0,224,144, 96, 64,160,160,112,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_104[] = {  5,  0,  0,  0,  0,216,144,144,144,224,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_105[] = {  3,  0,  0,  0,  0, 64, 64, 64, 64,192,  0, 64,  0,  0,  0};
    const GLubyte TimesRoman10_Character_106[] = {  3,  0,  0,128, 64, 64, 64, 64, 64,192,  0, 64,  0,  0,  0};
    const GLubyte TimesRoman10_Character_107[] = {  5,  0,  0,  0,  0,152,144,224,160,144,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_108[] = {  4,  0,  0,  0,  0,224, 64, 64, 64, 64, 64,192,  0,  0,  0};
    const GLubyte TimesRoman10_Character_109[] = {  8,  0,  0,  0,  0,219,146,146,146,236,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_110[] = {  5,  0,  0,  0,  0,216,144,144,144,224,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_111[] = {  5,  0,  0,  0,  0, 96,144,144,144, 96,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_112[] = {  5,  0,  0,192,128,224,144,144,144,224,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_113[] = {  5,  0,  0, 56, 16,112,144,144,144,112,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_114[] = {  4,  0,  0,  0,  0,224, 64, 64, 96,160,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_115[] = {  4,  0,  0,  0,  0,224, 32, 96,128,224,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_116[] = {  4,  0,  0,  0,  0, 48, 64, 64, 64,224, 64,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_117[] = {  5,  0,  0,  0,  0,104,144,144,144,144,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_118[] = {  5,  0,  0,  0,  0, 32, 96, 80,144,216,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_119[] = {  8,  0,  0,  0,  0, 40,108, 84,146,219,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_120[] = {  6,  0,  0,  0,  0,216, 80, 32, 80,216,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_121[] = {  5,  0,  0,128,128, 64, 96,160,144,184,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_122[] = {  5,  0,  0,  0,  0,240,144, 64, 32,240,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_123[] = {  4,  0,  0, 32, 64, 64, 64,128, 64, 64, 64, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_124[] = {  2,  0,  0,128,128,128,128,128,128,128,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_125[] = {  4,  0,  0,128, 64, 64, 64, 32, 64, 64, 64,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_126[] = {  7,  0,  0,  0,  0,  0,  0,152,100,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_127[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_128[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_129[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_130[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_131[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_132[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_133[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_134[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_135[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_136[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_137[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_138[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_139[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_140[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_141[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_142[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_143[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_144[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_145[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_146[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_147[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_148[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_149[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_150[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_151[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_152[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_153[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_154[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_155[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_156[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_157[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_158[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_159[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,170,  0,  0,  0,130,  0,  0,  0,130,  0,  0,  0,170,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_160[] = {  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_161[] = {  3,  0,  0, 64, 64, 64, 64, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_162[] = {  5,  0,  0,  0,128,224,144,128,144,112, 16,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_163[] = {  5,  0,  0,  0,  0,240,200, 64,224, 64, 80, 48,  0,  0,  0};
    const GLubyte TimesRoman10_Character_164[] = {  5,  0,  0,  0,  0,  0,136,112, 80, 80,112,136,  0,  0,  0};
    const GLubyte TimesRoman10_Character_165[] = {  5,  0,  0,  0,  0,112, 32,248, 32,216, 80,136,  0,  0,  0};
    const GLubyte TimesRoman10_Character_166[] = {  2,  0,  0,  0,  0,128,128,128,  0,128,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_167[] = {  5,  0,  0,  0,224,144, 32, 80,144,160, 64,144,112,  0,  0};
    const GLubyte TimesRoman10_Character_168[] = {  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0};
    const GLubyte TimesRoman10_Character_169[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 77,  0, 81,  0, 77,  0, 34,  0, 28,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_170[] = {  4,  0,  0,  0,  0,  0,  0,224,  0,160, 32,192,  0,  0,  0};
    const GLubyte TimesRoman10_Character_171[] = {  5,  0,  0,  0,  0,  0, 80,160,160, 80,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_172[] = {  7,  0,  0,  0,  0,  0,  4,  4,124,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_173[] = {  4,  0,  0,  0,  0,  0,  0,224,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_174[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 85,  0, 89,  0, 93,  0, 34,  0, 28,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_175[] = {  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,  0,  0,  0};
    const GLubyte TimesRoman10_Character_176[] = {  4,  0,  0,  0,  0,  0,  0,  0, 96,144,144, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_177[] = {  6,  0,  0,  0,  0,248,  0, 32, 32,248, 32, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_178[] = {  3,  0,  0,  0,  0,  0,  0,  0,224, 64,160, 96,  0,  0,  0};
    const GLubyte TimesRoman10_Character_179[] = {  3,  0,  0,  0,  0,  0,  0,  0,192, 32, 64,224,  0,  0,  0};
    const GLubyte TimesRoman10_Character_180[] = {  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64,  0,  0,  0};
    const GLubyte TimesRoman10_Character_181[] = {  5,  0,  0,128,128,232,144,144,144,144,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_182[] = {  6,  0,  0, 40, 40, 40, 40,104,232,232,232,124,  0,  0,  0};
    const GLubyte TimesRoman10_Character_183[] = {  2,  0,  0,  0,  0,  0,  0,128,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_184[] = {  4,  0,192, 32, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_185[] = {  3,  0,  0,  0,  0,  0,  0,  0,224, 64,192, 64,  0,  0,  0};
    const GLubyte TimesRoman10_Character_186[] = {  4,  0,  0,  0,  0,  0,  0,224,  0, 64,160, 64,  0,  0,  0};
    const GLubyte TimesRoman10_Character_187[] = {  5,  0,  0,  0,  0,  0,160, 80, 80,160,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_188[] = {  8,  0,  0,  0,  0, 68, 62, 44,244, 72,200, 68,  0,  0,  0};
    const GLubyte TimesRoman10_Character_189[] = {  8,  0,  0,  0,  0, 78, 36, 42,246, 72,200, 68,  0,  0,  0};
    const GLubyte TimesRoman10_Character_190[] = {  8,  0,  0,  0,  0, 68, 62, 44,212, 40, 72,228,  0,  0,  0};
    const GLubyte TimesRoman10_Character_191[] = {  4,  0,  0,224,160,128, 64, 64,  0, 64,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_192[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16,  0, 16, 32};
    const GLubyte TimesRoman10_Character_193[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16,  0, 16,  8};
    const GLubyte TimesRoman10_Character_194[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16,  0, 40, 16};
    const GLubyte TimesRoman10_Character_195[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16,  0, 40, 20};
    const GLubyte TimesRoman10_Character_196[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16,  0, 40,  0};
    const GLubyte TimesRoman10_Character_197[] = {  8,  0,  0,  0,  0,238, 68,124, 40, 40, 56, 16, 16, 40, 16};
    const GLubyte TimesRoman10_Character_198[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,239,  0, 73,  0,120,  0, 46,  0, 40,  0, 57,  0, 31,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_199[] = {  7,  0, 96, 16, 32,120,196,128,128,128,196,124,  0,  0,  0};
    const GLubyte TimesRoman10_Character_200[] = {  6,  0,  0,  0,  0,248, 72, 64,112, 64, 72,248,  0, 32, 64};
    const GLubyte TimesRoman10_Character_201[] = {  6,  0,  0,  0,  0,248, 72, 64,112, 64, 72,248,  0, 32, 16};
    const GLubyte TimesRoman10_Character_202[] = {  6,  0,  0,  0,  0,248, 72, 64,112, 64, 72,248,  0, 80, 32};
    const GLubyte TimesRoman10_Character_203[] = {  6,  0,  0,  0,  0,248, 72, 64,112, 64, 72,248,  0, 80,  0};
    const GLubyte TimesRoman10_Character_204[] = {  4,  0,  0,  0,  0,224, 64, 64, 64, 64, 64,224,  0, 64,128};
    const GLubyte TimesRoman10_Character_205[] = {  4,  0,  0,  0,  0,224, 64, 64, 64, 64, 64,224,  0, 64, 32};
    const GLubyte TimesRoman10_Character_206[] = {  4,  0,  0,  0,  0,224, 64, 64, 64, 64, 64,224,  0,160, 64};
    const GLubyte TimesRoman10_Character_207[] = {  4,  0,  0,  0,  0,224, 64, 64, 64, 64, 64,224,  0,160,  0};
    const GLubyte TimesRoman10_Character_208[] = {  7,  0,  0,  0,  0,248, 76, 68,228, 68, 76,248,  0,  0,  0};
    const GLubyte TimesRoman10_Character_209[] = {  8,  0,  0,  0,  0,228, 76, 76, 84, 84,100,238,  0, 80, 40};
    const GLubyte TimesRoman10_Character_210[] = {  7,  0,  0,  0,  0,120,204,132,132,132,204,120,  0, 32, 64};
    const GLubyte TimesRoman10_Character_211[] = {  7,  0,  0,  0,  0,120,204,132,132,132,204,120,  0, 16,  8};
    const GLubyte TimesRoman10_Character_212[] = {  7,  0,  0,  0,  0,120,204,132,132,132,204,120,  0, 80, 32};
    const GLubyte TimesRoman10_Character_213[] = {  7,  0,  0,  0,  0,120,204,132,132,132,204,120,  0, 80, 40};
    const GLubyte TimesRoman10_Character_214[] = {  7,  0,  0,  0,  0,120,204,132,132,132,204,120,  0, 80,  0};
    const GLubyte TimesRoman10_Character_215[] = {  6,  0,  0,  0,  0,136, 80, 32, 80,136,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_216[] = {  8,  0,  0,  0,128,124,102, 82, 82, 74,102, 62,  1,  0,  0};
    const GLubyte TimesRoman10_Character_217[] = {  8,  0,  0,  0,  0, 56,108, 68, 68, 68, 68,238,  0, 16, 32};
    const GLubyte TimesRoman10_Character_218[] = {  8,  0,  0,  0,  0, 56,108, 68, 68, 68, 68,238,  0, 16,  8};
    const GLubyte TimesRoman10_Character_219[] = {  8,  0,  0,  0,  0, 56,108, 68, 68, 68, 68,238,  0, 40, 16};
    const GLubyte TimesRoman10_Character_220[] = {  8,  0,  0,  0,  0, 56,108, 68, 68, 68, 68,238,  0, 40,  0};
    const GLubyte TimesRoman10_Character_221[] = {  8,  0,  0,  0,  0, 56, 16, 16, 40, 40, 68,238,  0, 16,  8};
    const GLubyte TimesRoman10_Character_222[] = {  6,  0,  0,  0,  0,224, 64,112, 72,112, 64,224,  0,  0,  0};
    const GLubyte TimesRoman10_Character_223[] = {  5,  0,  0,  0,  0,224, 80, 80, 96, 80, 80, 32,  0,  0,  0};
    const GLubyte TimesRoman10_Character_224[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192,  0, 64,128,  0,  0};
    const GLubyte TimesRoman10_Character_225[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192,  0, 64, 32,  0,  0};
    const GLubyte TimesRoman10_Character_226[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192,  0,160, 64,  0,  0};
    const GLubyte TimesRoman10_Character_227[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192,  0,160, 80,  0,  0};
    const GLubyte TimesRoman10_Character_228[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192,  0,160,  0,  0,  0};
    const GLubyte TimesRoman10_Character_229[] = {  4,  0,  0,  0,  0,224,160, 96, 32,192, 64,160, 64,  0,  0};
    const GLubyte TimesRoman10_Character_230[] = {  6,  0,  0,  0,  0,216,160,112, 40,216,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_231[] = {  4,  0,192, 32, 64, 96,128,128,128, 96,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_232[] = {  4,  0,  0,  0,  0, 96,128,192,160, 96,  0, 64,128,  0,  0};
    const GLubyte TimesRoman10_Character_233[] = {  4,  0,  0,  0,  0, 96,128,192,160, 96,  0, 64, 32,  0,  0};
    const GLubyte TimesRoman10_Character_234[] = {  4,  0,  0,  0,  0, 96,128,192,160, 96,  0,160, 64,  0,  0};
    const GLubyte TimesRoman10_Character_235[] = {  4,  0,  0,  0,  0, 96,128,192,160, 96,  0,160,  0,  0,  0};
    const GLubyte TimesRoman10_Character_236[] = {  4,  0,  0,  0,  0,224, 64, 64, 64,192,  0, 64,128,  0,  0};
    const GLubyte TimesRoman10_Character_237[] = {  4,  0,  0,  0,  0,224, 64, 64, 64,192,  0, 64, 32,  0,  0};
    const GLubyte TimesRoman10_Character_238[] = {  4,  0,  0,  0,  0,224, 64, 64, 64,192,  0,160, 64,  0,  0};
    const GLubyte TimesRoman10_Character_239[] = {  4,  0,  0,  0,  0,224, 64, 64, 64,192,  0,160,  0,  0,  0};
    const GLubyte TimesRoman10_Character_240[] = {  5,  0,  0,  0,  0, 96,144,144,144,112,160,112, 64,  0,  0};
    const GLubyte TimesRoman10_Character_241[] = {  5,  0,  0,  0,  0,216,144,144,144,224,  0,160, 80,  0,  0};
    const GLubyte TimesRoman10_Character_242[] = {  5,  0,  0,  0,  0, 96,144,144,144, 96,  0, 32, 64,  0,  0};
    const GLubyte TimesRoman10_Character_243[] = {  5,  0,  0,  0,  0, 96,144,144,144, 96,  0, 64, 32,  0,  0};
    const GLubyte TimesRoman10_Character_244[] = {  5,  0,  0,  0,  0, 96,144,144,144, 96,  0,160, 64,  0,  0};
    const GLubyte TimesRoman10_Character_245[] = {  5,  0,  0,  0,  0, 96,144,144,144, 96,  0,160, 80,  0,  0};
    const GLubyte TimesRoman10_Character_246[] = {  5,  0,  0,  0,  0, 96,144,144,144, 96,  0,160,  0,  0,  0};
    const GLubyte TimesRoman10_Character_247[] = {  6,  0,  0,  0,  0, 32,  0,248,  0, 32,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_248[] = {  5,  0,  0,  0,  0,224,144,144,144,112,  8,  0,  0,  0,  0};
    const GLubyte TimesRoman10_Character_249[] = {  5,  0,  0,  0,  0,104,144,144,144,144,  0, 32, 64,  0,  0};
    const GLubyte TimesRoman10_Character_250[] = {  5,  0,  0,  0,  0,104,144,144,144,144,  0, 64, 32,  0,  0};
    const GLubyte TimesRoman10_Character_251[] = {  5,  0,  0,  0,  0,104,144,144,144,144,  0, 80, 32,  0,  0};
    const GLubyte TimesRoman10_Character_252[] = {  5,  0,  0,  0,  0,104,144,144,144,144,  0, 80,  0,  0,  0};
    const GLubyte TimesRoman10_Character_253[] = {  5,  0,  0,128,192, 64, 96,160,144,184,  0, 32, 16,  0,  0};
    const GLubyte TimesRoman10_Character_254[] = {  5,  0,  0,192,128,224,144,144,144,224,128,128,  0,  0,  0};
    const GLubyte TimesRoman10_Character_255[] = {  5,  0,  0,128,192, 64, 96,160,144,184,  0,160,  0,  0,  0};

    /* The font characters mapping: */
    const GLubyte* TimesRoman10_Character_Map[] = {TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,
                                                   TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,
                                                   TimesRoman10_Character_032,TimesRoman10_Character_033,TimesRoman10_Character_034,TimesRoman10_Character_035,TimesRoman10_Character_036,TimesRoman10_Character_037,TimesRoman10_Character_038,TimesRoman10_Character_039,TimesRoman10_Character_040,TimesRoman10_Character_041,TimesRoman10_Character_042,TimesRoman10_Character_043,TimesRoman10_Character_044,TimesRoman10_Character_045,TimesRoman10_Character_046,TimesRoman10_Character_047,
                                                   TimesRoman10_Character_048,TimesRoman10_Character_049,TimesRoman10_Character_050,TimesRoman10_Character_051,TimesRoman10_Character_052,TimesRoman10_Character_053,TimesRoman10_Character_054,TimesRoman10_Character_055,TimesRoman10_Character_056,TimesRoman10_Character_057,TimesRoman10_Character_058,TimesRoman10_Character_059,TimesRoman10_Character_060,TimesRoman10_Character_061,TimesRoman10_Character_062,TimesRoman10_Character_063,
                                                   TimesRoman10_Character_064,TimesRoman10_Character_065,TimesRoman10_Character_066,TimesRoman10_Character_067,TimesRoman10_Character_068,TimesRoman10_Character_069,TimesRoman10_Character_070,TimesRoman10_Character_071,TimesRoman10_Character_072,TimesRoman10_Character_073,TimesRoman10_Character_074,TimesRoman10_Character_075,TimesRoman10_Character_076,TimesRoman10_Character_077,TimesRoman10_Character_078,TimesRoman10_Character_079,
                                                   TimesRoman10_Character_080,TimesRoman10_Character_081,TimesRoman10_Character_082,TimesRoman10_Character_083,TimesRoman10_Character_084,TimesRoman10_Character_085,TimesRoman10_Character_086,TimesRoman10_Character_087,TimesRoman10_Character_088,TimesRoman10_Character_089,TimesRoman10_Character_090,TimesRoman10_Character_091,TimesRoman10_Character_092,TimesRoman10_Character_093,TimesRoman10_Character_094,TimesRoman10_Character_095,
                                                   TimesRoman10_Character_096,TimesRoman10_Character_097,TimesRoman10_Character_098,TimesRoman10_Character_099,TimesRoman10_Character_100,TimesRoman10_Character_101,TimesRoman10_Character_102,TimesRoman10_Character_103,TimesRoman10_Character_104,TimesRoman10_Character_105,TimesRoman10_Character_106,TimesRoman10_Character_107,TimesRoman10_Character_108,TimesRoman10_Character_109,TimesRoman10_Character_110,TimesRoman10_Character_111,
                                                   TimesRoman10_Character_112,TimesRoman10_Character_113,TimesRoman10_Character_114,TimesRoman10_Character_115,TimesRoman10_Character_116,TimesRoman10_Character_117,TimesRoman10_Character_118,TimesRoman10_Character_119,TimesRoman10_Character_120,TimesRoman10_Character_121,TimesRoman10_Character_122,TimesRoman10_Character_123,TimesRoman10_Character_124,TimesRoman10_Character_125,TimesRoman10_Character_126,TimesRoman10_Character_032,
                                                   TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,
                                                   TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,TimesRoman10_Character_032,
                                                   TimesRoman10_Character_160,TimesRoman10_Character_161,TimesRoman10_Character_162,TimesRoman10_Character_163,TimesRoman10_Character_164,TimesRoman10_Character_165,TimesRoman10_Character_166,TimesRoman10_Character_167,TimesRoman10_Character_168,TimesRoman10_Character_169,TimesRoman10_Character_170,TimesRoman10_Character_171,TimesRoman10_Character_172,TimesRoman10_Character_173,TimesRoman10_Character_174,TimesRoman10_Character_175,
                                                   TimesRoman10_Character_176,TimesRoman10_Character_177,TimesRoman10_Character_178,TimesRoman10_Character_179,TimesRoman10_Character_180,TimesRoman10_Character_181,TimesRoman10_Character_182,TimesRoman10_Character_183,TimesRoman10_Character_184,TimesRoman10_Character_185,TimesRoman10_Character_186,TimesRoman10_Character_187,TimesRoman10_Character_188,TimesRoman10_Character_189,TimesRoman10_Character_190,TimesRoman10_Character_191,
                                                   TimesRoman10_Character_192,TimesRoman10_Character_193,TimesRoman10_Character_194,TimesRoman10_Character_195,TimesRoman10_Character_196,TimesRoman10_Character_197,TimesRoman10_Character_198,TimesRoman10_Character_199,TimesRoman10_Character_200,TimesRoman10_Character_201,TimesRoman10_Character_202,TimesRoman10_Character_203,TimesRoman10_Character_204,TimesRoman10_Character_205,TimesRoman10_Character_206,TimesRoman10_Character_207,
                                                   TimesRoman10_Character_208,TimesRoman10_Character_209,TimesRoman10_Character_210,TimesRoman10_Character_211,TimesRoman10_Character_212,TimesRoman10_Character_213,TimesRoman10_Character_214,TimesRoman10_Character_215,TimesRoman10_Character_216,TimesRoman10_Character_217,TimesRoman10_Character_218,TimesRoman10_Character_219,TimesRoman10_Character_220,TimesRoman10_Character_221,TimesRoman10_Character_222,TimesRoman10_Character_223,
                                                   TimesRoman10_Character_224,TimesRoman10_Character_225,TimesRoman10_Character_226,TimesRoman10_Character_227,TimesRoman10_Character_228,TimesRoman10_Character_229,TimesRoman10_Character_230,TimesRoman10_Character_231,TimesRoman10_Character_232,TimesRoman10_Character_233,TimesRoman10_Character_234,TimesRoman10_Character_235,TimesRoman10_Character_236,TimesRoman10_Character_237,TimesRoman10_Character_238,TimesRoman10_Character_239,
                                                   TimesRoman10_Character_240,TimesRoman10_Character_241,TimesRoman10_Character_242,TimesRoman10_Character_243,TimesRoman10_Character_244,TimesRoman10_Character_245,TimesRoman10_Character_246,TimesRoman10_Character_247,TimesRoman10_Character_248,TimesRoman10_Character_249,TimesRoman10_Character_250,TimesRoman10_Character_251,TimesRoman10_Character_252,TimesRoman10_Character_253,TimesRoman10_Character_254,TimesRoman10_Character_255,NULL};

    /* The font structure: */
    const Font fontTimesRoman10 = { "-adobe-times-medium-r-normal--10-100-75-75-p-54-iso8859-1", 256, 14, TimesRoman10_Character_Map, 0, 4 };

    const GLubyte TimesRoman24_Character_000[] = { 19,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 64,  0, 64,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_001[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_002[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_003[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_004[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_005[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_006[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_007[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_008[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_009[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_010[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_011[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_012[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_013[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_014[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_015[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_016[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_017[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_018[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_019[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_020[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_021[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_022[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_023[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_024[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_025[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_026[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_027[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_028[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_029[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_030[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_031[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_032[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_033[] = {  8,  0,  0,  0,  0,  0,  0,  0, 24, 24,  0,  0,  0, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_034[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 68,  0,102,  0,102,  0,102,  0,102,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_035[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 17,  0, 17,  0, 17,  0, 17,  0, 17,  0,127,224,127,224,  8,128,  8,128,  8,128, 63,240, 63,240,  4, 64,  4, 64,  4, 64,  4, 64,  4, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_036[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  4,  0, 63,  0,229,192,196,192,132, 96,132, 96,  4, 96,  4,224,  7,192,  7,128, 30,  0, 60,  0,116,  0,100,  0,100, 32,100, 96, 52,224, 31,128,  4,  0,  4,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_037[] = { 19,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 30,  0, 12, 57,  0,  6, 48,128,  2, 48, 64,  3, 48, 64,  1,152, 64,  0,140,192,  0,199,128, 60, 96,  0,114, 32,  0, 97, 48,  0, 96,152,  0, 96,136,  0, 48,140,  0, 25,254,  0, 15,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_038[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30, 30,  0, 63,191,  0,112,240,128, 96, 96,  0, 96,224,  0, 96,208,  0, 49,144,  0, 27,136,  0, 15, 12,  0,  7, 31,  0,  7,128,  0, 14,192,  0, 12, 96,  0, 12, 32,  0, 12, 32,  0,  6, 96,  0,  3,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_039[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 12,  4, 28, 24,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_040[] = {  8,  0,  0,  2,  4,  8, 24, 16, 48, 48, 96, 96, 96, 96, 96, 96, 96, 96, 48, 48, 16, 24,  8,  4,  2,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_041[] = {  8,  0,  0, 64, 32, 16, 24,  8, 12, 12,  6,  6,  6,  6,  6,  6,  6,  6, 12, 12,  8, 24, 16, 32, 64,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_042[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  7,  0, 50, 96, 58,224,  7,  0, 58,224, 50, 96,  7,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_043[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,127,248,127,248,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_044[] = {  7,  0,  0,  0,  0, 48, 24,  8, 56, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_045[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,248,127,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_046[] = {  6,  0,  0,  0,  0,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_047[] = {  7,  0,  0,  0,  0,192,192,192, 64, 96, 96, 32, 48, 48, 16, 24, 24,  8, 12, 12,  4,  6,  6,  6,  6,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_048[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 25,128, 48,192, 48,192,112,224, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 48,192, 25,128, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_049[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63,192,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0,  6,  0, 30,  0,  6,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_050[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,192,127,224, 48, 32, 24,  0, 12,  0,  6,  0,  2,  0,  3,  0,  1,128,  1,128,  0,192,  0,192, 64,192, 64,192, 33,192, 63,128, 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_051[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,115,  0, 97,128,  0,128,  0,192,  0,192,  0,192,  1,192,  3,128, 15,  0,  6,  0,  3,  0, 65,128, 65,128, 35,128, 63,  0, 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_052[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,128,  1,128,  1,128,  1,128,127,224,127,224, 97,128, 33,128, 49,128, 17,128, 25,128,  9,128, 13,128,  5,128,  3,128,  3,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_053[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63,  0,113,192, 96,192,  0, 96,  0, 96,  0, 96,  0, 96,  0,224,  1,192,  7,192, 63,  0, 60,  0, 48,  0, 16,  0, 16,  0, 15,192, 15,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_054[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 61,192, 48,192,112, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,192,121,192,119,  0, 48,  0, 56,  0, 24,  0, 12,  0,  7,  0,  1,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_055[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  6,  0,  6,  0,  6,  0,  2,  0,  3,  0,  3,  0,  1,  0,  1,128,  1,128,  0,128,  0,192, 64,192, 96, 96,127,224, 63,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_056[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192,112,192, 96, 96, 96, 96, 96, 96, 32,224, 48,192, 27,128, 15,  0, 15,  0, 25,128, 48,192, 48,192, 48,192, 25,128, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_057[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,  0, 14,  0,  3,  0,  1,128,  1,192,  0,192, 14,192, 57,224, 48,224, 96, 96, 96, 96, 96, 96, 96, 96, 96,224, 48,192, 59,192, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_058[] = {  6,  0,  0,  0,  0,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_059[] = {  7,  0,  0,  0,  0, 48, 24,  8, 56, 48,  0,  0,  0,  0,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_060[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48,  0,224,  3,128, 14,  0, 56,  0, 96,  0, 56,  0, 14,  0,  3,128,  0,224,  0, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_061[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,248,127,248,  0,  0,  0,  0,127,248,127,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_062[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,  0, 56,  0, 14,  0,  3,128,  0,224,  0, 48,  0,224,  3,128, 14,  0, 56,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_063[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0,  0,  0,  4,  0,  4,  0,  4,  0,  6,  0,  6,  0,  3,  0,  3,128,  1,192, 48,192, 48,192, 32,192, 49,128, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_064[] = { 22,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252,  0,  3,131,  0,  6,  0,  0, 12,  0,  0, 24,119,128, 24,222,192, 49,142, 96, 49,134, 32, 49,134, 48, 49,134, 16, 49,131, 16, 48,195, 16, 48,227, 16, 56,127, 16, 24, 59, 48, 28,  0, 32, 14,  0, 96,  7,  0,192,  3,195,128,  0,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_065[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  6,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_066[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,240, 24, 60, 24, 12, 24,  6, 24,  6, 24,  6, 24, 12, 24, 28, 31,240, 24, 32, 24, 24, 24, 12, 24, 12, 24, 12, 24, 24, 24, 56,127,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_067[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240, 15, 28, 28,  4, 48,  2, 48,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 48,  2, 48,  2, 28,  6, 14, 30,  3,242,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_068[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,224,  0, 24, 56,  0, 24, 28,  0, 24,  6,  0, 24,  6,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  6,  0, 24,  6,  0, 24, 28,  0, 24, 56,  0,127,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_069[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252, 24, 12, 24,  4, 24,  4, 24,  0, 24,  0, 24, 32, 24, 32, 31,224, 24, 32, 24, 32, 24,  0, 24,  0, 24,  8, 24,  8, 24, 24,127,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_070[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24, 16, 24, 16, 31,240, 24, 16, 24, 16, 24,  0, 24,  0, 24,  8, 24,  8, 24, 24,127,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_071[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 15, 28,  0, 28, 14,  0, 48,  6,  0, 48,  6,  0, 96,  6,  0, 96,  6,  0, 96, 31,128, 96,  0,  0, 96,  0,  0, 96,  0,  0, 96,  0,  0, 48,  2,  0, 48,  2,  0, 28,  6,  0, 14, 30,  0,  3,242,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_072[] = { 19,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126, 15,192, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 31,255,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0,126, 15,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_073[] = {  8,  0,  0,  0,  0,  0,  0,  0,126, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,126,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_074[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,102,  0, 99,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0, 15,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_075[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126, 15,128, 24,  7,  0, 24, 14,  0, 24, 28,  0, 24, 56,  0, 24,112,  0, 24,224,  0, 25,192,  0, 31,128,  0, 31,  0,  0, 25,128,  0, 24,192,  0, 24, 96,  0, 24, 48,  0, 24, 24,  0, 24, 12,  0,126, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_076[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252, 24, 12, 24,  4, 24,  4, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0,126,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_077[] = { 22,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124, 16,252, 16, 48, 48, 16, 48, 48, 16,104, 48, 16,104, 48, 16,196, 48, 16,196, 48, 17,132, 48, 17,130, 48, 19,  2, 48, 19,  1, 48, 22,  1, 48, 22,  1, 48, 28,  0,176, 28,  0,176, 24,  0,112,120,  0,124,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_078[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  6,  0, 16, 14,  0, 16, 14,  0, 16, 26,  0, 16, 50,  0, 16, 50,  0, 16, 98,  0, 16,194,  0, 16,194,  0, 17,130,  0, 19,  2,  0, 19,  2,  0, 22,  2,  0, 28,  2,  0, 28,  2,  0, 24,  2,  0,120, 15,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_079[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_080[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 31,224, 24, 56, 24, 24, 24, 12, 24, 12, 24, 12, 24, 24, 24, 56,127,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_081[] = { 18,  0,  0,  0,  0,  0,  0,  0,  7,128,  0, 28,  0,  0, 56,  0,  0,112,  0,  0,224,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_082[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126, 15, 24, 14, 24, 28, 24, 56, 24, 48, 24, 96, 24,224, 25,192, 31,224, 24, 56, 24, 24, 24, 28, 24, 12, 24, 28, 24, 24, 24, 56,127,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_083[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 79,  0,120,192, 96, 96, 64, 48, 64, 48,  0, 48,  0,112,  1,224,  7,192, 15,  0, 60,  0,112,  0, 96, 32, 96, 32, 96, 96, 49,224, 15, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_084[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,224,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128, 65,130, 65,130, 97,134,127,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_085[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 24,  0, 12,  4,  0, 24,  4,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0,126, 15,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_086[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,128,  0,  1,128,  0,  1,128,  0,  3,192,  0,  3, 64,  0,  3, 96,  0,  6, 32,  0,  6, 32,  0,  6, 48,  0, 12, 16,  0, 12, 24,  0, 24,  8,  0, 24,  8,  0, 24, 12,  0, 48,  4,  0, 48,  6,  0,252, 31,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_087[] = { 23,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,131,  0,  1,131,  0,  1,131,128,  3,135,128,  3, 70,128,  3, 70,192,  6, 70, 64,  6, 76, 64,  6, 76, 96, 12, 44, 96, 12, 44, 32, 24, 44, 32, 24, 24, 48, 24, 24, 16, 48, 24, 16, 48, 24, 24,252,126,126,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_088[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 15,192, 48,  3,128, 24,  7,  0,  8, 14,  0,  4, 12,  0,  6, 24,  0,  2, 56,  0,  1,112,  0,  0,224,  0,  0,192,  0,  1,192,  0,  3,160,  0,  3, 16,  0,  6,  8,  0, 14, 12,  0, 28,  6,  0,126, 15,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_089[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,224,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  3,192,  3, 64,  6, 96,  6, 32, 12, 48, 28, 16, 24, 24, 56,  8, 48, 12,252, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_090[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252,112, 12, 56,  4, 24,  4, 28,  0, 12,  0, 14,  0,  7,  0,  3,  0,  3,128,  1,128,  1,192,  0,224, 64, 96, 64,112, 96, 56,127,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_091[] = {  8,  0,  0,  0, 62, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 62,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_092[] = {  7,  0,  0,  0,  0,  0,  0,  0,  6,  6,  4, 12, 12,  8, 24, 24, 16, 48, 48, 32, 96, 96, 64,192,192,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_093[] = {  8,  0,  0,  0,124, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,124,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_094[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64, 96,192, 32,128, 49,128, 17,  0, 27,  0, 10,  0, 14,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_095[] = { 13,  0,  0,  0,  0,255,248,255,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_096[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48,112, 64, 96, 48,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_097[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_098[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 47,  0, 57,192, 48,192, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,192, 57,192, 55,  0, 48,  0, 48,  0, 48,  0, 48,  0,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_099[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 32,192, 49,192, 15,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_100[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 96, 57,192, 48,192, 96,192, 96,192, 96,192, 96,192, 96,192, 96,192, 48,192, 57,192, 14,192,  0,192,  0,192,  0,192,  0,192,  1,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_101[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0,127,192, 96,192, 32,192, 49,128, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_102[] = {  7,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,254, 48, 48, 48, 22, 14,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_103[] = { 12,  0,  0,  0,  0, 31,128,120,224, 96, 48, 96, 16, 48, 48, 31,224, 63,128, 48,  0, 24,  0, 31,  0, 25,128, 48,192, 48,192, 48,192, 48,192, 25,128, 15,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_104[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,240, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 56,224, 55,192, 51,128, 48,  0, 48,  0, 48,  0, 48,  0,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_105[] = {  6,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_106[] = {  6,  0,  0,192,224, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_107[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,121,240, 48,224, 49,192, 51,128, 55,  0, 54,  0, 60,  0, 52,  0, 50,  0, 51,  0, 49,128, 51,224, 48,  0, 48,  0, 48,  0, 48,  0,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_108[] = {  6,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_109[] = { 20,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,241,224, 48, 96,192, 48, 96,192, 48, 96,192, 48, 96,192, 48, 96,192, 48, 96,192, 48, 96,192, 48, 96,192, 56,241,192, 55,207,128,115,135,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_110[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,240, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 56,224, 55,192,115,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_111[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_112[] = { 12,  0,  0,  0,  0,120,  0, 48,  0, 48,  0, 48,  0, 48,  0, 55,  0, 57,192, 48,192, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,192, 57,192,119,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_113[] = { 12,  0,  0,  0,  0,  1,224,  0,192,  0,192,  0,192,  0,192, 14,192, 57,192, 48,192, 96,192, 96,192, 96,192, 96,192, 96,192, 96,192, 48,192, 57,192, 14,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_114[] = {  8,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 59, 55,115,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_115[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  0, 99,  0, 65,128,  1,128,  3,128, 15,  0, 62,  0, 56,  0,112,  0, 97,  0, 51,  0, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_116[] = {  7,  0,  0,  0,  0,  0,  0,  0, 28, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48,254,112, 48, 16,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_117[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,112, 31, 96, 56,224, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96,112,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_118[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0, 14,  0, 14,  0, 26,  0, 25,  0, 25,  0, 49,  0, 48,128, 48,128, 96,128, 96,192,241,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_119[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4, 16,  0, 14, 56,  0, 14, 56,  0, 26, 40,  0, 26,100,  0, 25,100,  0, 49,100,  0, 48,194,  0, 48,194,  0, 96,194,  0, 96,195,  0,241,231,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_120[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,240, 48, 96, 16,192, 25,192, 13,128,  7,  0,  6,  0, 13,  0, 28,128, 24,192, 48, 96,120,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_121[] = { 11,  0,  0,  0,  0,224,  0,240,  0, 24,  0,  8,  0, 12,  0,  4,  0, 14,  0, 14,  0, 26,  0, 25,  0, 25,  0, 49,  0, 48,128, 48,128, 96,128, 96,192,241,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_122[] = { 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128, 97,128, 48,128, 56,  0, 24,  0, 28,  0, 12,  0, 14,  0,  7,  0, 67,  0, 97,128,127,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_123[] = { 10,  0,  0,  0,  0,  3,128,  6,  0, 12,  0, 12,  0, 12,  0, 12,  0, 12,  0, 12,  0,  8,  0, 24,  0, 16,  0, 96,  0, 16,  0, 24,  0,  8,  0, 12,  0, 12,  0, 12,  0, 12,  0, 12,  0,  6,  0,  3,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_124[] = {  6,  0,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_125[] = { 10,  0,  0,  0,  0,112,  0, 24,  0, 12,  0, 12,  0, 12,  0, 12,  0, 12,  0, 12,  0,  4,  0,  6,  0,  2,  0,  1,128,  2,  0,  6,  0,  4,  0, 12,  0, 12,  0, 12,  0, 12,  0, 12,  0, 24,  0,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_126[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 65,192, 99,224, 62, 48, 28, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_127[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_128[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_129[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_130[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_131[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_132[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_133[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_134[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_135[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_136[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_137[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_138[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_139[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_140[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_141[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_142[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_143[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_144[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_145[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_146[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_147[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_148[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_149[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_150[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_151[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_152[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_153[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_154[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_155[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_156[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_157[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_158[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_159[] = { 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0, 85, 85, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_160[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_161[] = {  8,  0,  0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,  0,  0,  0, 12, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_162[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0, 32,  0, 31,  0, 63,128, 56, 64,104,  0,100,  0,100,  0,100,  0, 98,  0, 98,  0, 33,192, 49,192, 15,128,  0,128,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_163[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,115,192, 95, 96, 60, 32, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,  0,126,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,192, 12,192,  7,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_164[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 48,119,112, 63,224, 24,192, 48, 96, 48, 96, 48, 96, 48, 96, 24,192, 63,224,119,112, 96, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_165[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,192,  3,  0,  3,  0,  3,  0,  3,  0, 31,224,  3,  0, 31,224,  3,  0,  7,128, 12,128, 12,192, 24, 64, 24, 96, 48, 32,112, 48,248,124,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_166[] = {  6,  0,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48,  0,  0,  0, 48, 48, 48, 48, 48, 48, 48,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_167[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,  0, 25,  0, 24,128,  1,128,  3,128,  7,  0, 14,  0, 29,  0, 56,128, 48,192, 32,192, 33,192, 19,128, 15,  0, 14,  0, 28,  0, 24,  0, 17,128,  9,128,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_168[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,102,102,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_169[] = { 19,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,248,  0, 14, 14,  0, 24,  3,  0, 48,225,128, 35,184,128, 98, 12,192, 70,  0, 64, 68,  0, 64, 68,  0, 64, 68,  0, 64, 70,  0, 64, 98, 12,192, 35,152,128, 48,241,128, 24,  3,  0, 14, 14,  0,  3,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_170[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0,118,204,204,124, 12,204,120,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_171[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2, 32,  6, 96, 12,192, 25,128, 51,  0, 51,  0, 25,128, 12,192,  6, 96,  2, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_172[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,  0, 24,  0, 24,  0, 24,  0, 24,127,248,127,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_173[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,  0,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_174[] = { 19,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,248,  0, 14, 14,  0, 24,  3,  0, 48,  1,128, 35,140,128, 97, 24,192, 65, 16, 64, 65, 32, 64, 65,240, 64, 65, 24, 64, 65,  8, 64, 97,  8,192, 33, 24,128, 51,241,128, 24,  3,  0, 14, 14,  0,  3,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_175[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,126,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_176[] = {  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 28,  0, 34,  0, 65,  0, 65,  0, 65,  0, 34,  0, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_177[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,248,127,248,  0,  0,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,127,248,127,248,  3,  0,  3,  0,  3,  0,  3,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_178[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 68, 32, 48, 16,  8, 12,140, 76, 56,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_179[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,112,136,140, 12,  8, 48,  8,140, 76, 56,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_180[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 32, 24, 14,  6,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_181[] = { 13,  0,  0,  0,  0, 32,  0,112,  0, 96,  0, 32,  0, 32,  0, 46,112, 63, 96, 56,224, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96,112,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_182[] = { 11,  0,  0,  0,  0,  4,128,  4,128,  4,128,  4,128,  4,128,  4,128,  4,128,  4,128,  4,128,  4,128,  4,128, 12,128, 28,128, 60,128, 60,128,124,128,124,128,124,128, 60,128, 60,128, 28,128, 15,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_183[] = {  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_184[] = {  8,  0, 60,102,  6, 30, 24,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_185[] = {  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124, 16, 16, 16, 16, 16, 16, 80, 48, 16,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_186[] = {  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0, 60,102,102,102,102,102, 60,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_187[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 34,  0, 51,  0, 25,128, 12,192,  6, 96,  6, 96, 12,192, 25,128, 51,  0, 34,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_188[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,  2,  0,  8,  2,  0, 12,127,128,  4, 34,  0,  6, 50,  0,  3, 18,  0,  1, 10,  0,125,142,  0, 16,134,  0, 16,194,  0, 16, 96,  0, 16, 32,  0, 16, 48,  0, 16, 16,  0, 80, 24,  0, 48, 12,  0, 16,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_189[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 63,  0,  8, 17,  0, 12,  8,  0,  4, 12,  0,  6,  4,  0,  3,  2,  0,  1,  3,  0,125,163,  0, 16,147,  0, 16,206,  0, 16, 96,  0, 16, 32,  0, 16, 48,  0, 16, 16,  0, 80, 24,  0, 48, 12,  0, 16,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_190[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,  2,  0,  8,  2,  0, 12,127,128,  4, 34,  0,  6, 50,  0,  3, 18,  0,  1, 10,  0,113,142,  0,136,134,  0,140,194,  0, 12, 96,  0,  8, 32,  0, 48, 48,  0,  8, 16,  0,140, 24,  0, 76, 12,  0, 56,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_191[] = { 11,  0,  0,  0,  0, 31,  0, 49,128, 96,128, 97,128, 97,128,112,  0, 56,  0, 24,  0, 28,  0, 12,  0, 12,  0,  4,  0,  4,  0,  0,  0,  0,  0,  6,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_192[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  6,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  0,  0,  0,  0, 32,  0,  0,192,  0,  3,128,  0,  3,  0,  0};
    const GLubyte TimesRoman24_Character_193[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  6,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  0,  0,  0,  1,  0,  0,  0,192,  0,  0,112,  0,  0, 48,  0};
    const GLubyte TimesRoman24_Character_194[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  6,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  0,  0,  0,  8, 16,  0,  6, 96,  0,  3,192,  0,  1,128,  0};
    const GLubyte TimesRoman24_Character_195[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  7,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  4,224,  0,  3,144,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_196[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  6,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  6, 48,  0,  6, 48,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_197[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252, 31,128, 48,  6,  0, 16,  6,  0, 16, 12,  0, 24, 12,  0,  8, 12,  0, 15,248,  0, 12, 24,  0,  4, 24,  0,  4, 48,  0,  6, 48,  0,  2, 48,  0,  2, 96,  0,  1, 96,  0,  1,192,  0,  1,192,  0,  0,128,  0,  1,192,  0,  2, 32,  0,  2, 32,  0,  1,192,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_198[] = { 21,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,249,255,240, 48, 96, 48, 16, 96, 16, 16, 96, 16, 24, 96,  0,  8, 96,  0, 15,224,128, 12, 96,128,  4,127,128,  4, 96,128,  6, 96,128,  2, 96,  0,  2, 96,  0,  1, 96, 32,  1, 96, 32,  1,224, 96,  3,255,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_199[] = { 16,  0,  0,  3,192,  6, 96,  0, 96,  1,224,  1,128,  0,128,  3,240, 15, 28, 28,  4, 48,  2, 48,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 48,  2, 48,  2, 28,  6, 14, 30,  3,242,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_200[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252, 24, 12, 24,  4, 24,  4, 24,  0, 24,  0, 24, 32, 24, 32, 31,224, 24, 32, 24, 32, 24,  0, 24,  0, 24,  8, 24,  8, 24, 24,127,248,  0,  0,  0,128,  3,  0, 14,  0, 12,  0};
    const GLubyte TimesRoman24_Character_201[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252, 24, 12, 24,  4, 24,  4, 24,  0, 24,  0, 24, 32, 24, 32, 31,224, 24, 32, 24, 32, 24,  0, 24,  0, 24,  8, 24,  8, 24, 24,127,248,  0,  0,  2,  0,  1,128,  0,224,  0, 96};
    const GLubyte TimesRoman24_Character_202[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252, 24, 12, 24,  4, 24,  4, 24,  0, 24,  0, 24, 32, 24, 32, 31,224, 24, 32, 24, 32, 24,  0, 24,  0, 24,  8, 24,  8, 24, 24,127,248,  0,  0,  8, 16,  6, 96,  3,192,  1,128};
    const GLubyte TimesRoman24_Character_203[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,252, 24, 12, 24,  4, 24,  4, 24,  0, 24,  0, 24, 32, 24, 32, 31,224, 24, 32, 24, 32, 24,  0, 24,  0, 24,  8, 24,  8, 24, 24,127,248,  0,  0,  0,  0, 12,192, 12,192,  0,  0};
    const GLubyte TimesRoman24_Character_204[] = {  8,  0,  0,  0,  0,  0,  0,  0,126, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,126,  0,  4, 24,112, 96};
    const GLubyte TimesRoman24_Character_205[] = {  8,  0,  0,  0,  0,  0,  0,  0,126, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,126,  0, 32, 24, 14,  6};
    const GLubyte TimesRoman24_Character_206[] = {  8,  0,  0,  0,  0,  0,  0,  0, 63, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 63,  0, 64, 51, 30, 12};
    const GLubyte TimesRoman24_Character_207[] = {  8,  0,  0,  0,  0,  0,  0,  0,126, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,126,  0,  0,102,102,  0};
    const GLubyte TimesRoman24_Character_208[] = { 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,224,  0, 24, 56,  0, 24, 28,  0, 24,  6,  0, 24,  6,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0,255,  3,  0, 24,  3,  0, 24,  3,  0, 24,  3,  0, 24,  6,  0, 24,  6,  0, 24, 28,  0, 24, 56,  0,127,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_209[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124,  6,  0, 16, 14,  0, 16, 14,  0, 16, 26,  0, 16, 50,  0, 16, 50,  0, 16, 98,  0, 16,194,  0, 16,194,  0, 17,130,  0, 19,  2,  0, 19,  2,  0, 22,  2,  0, 28,  2,  0, 28,  2,  0, 24,  2,  0,120, 15,128,  0,  0,  0,  0,  0,  0,  2,112,  0,  1,200,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_210[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  0, 32,  0,  0,192,  0,  3,128,  0,  3,  0,  0};
    const GLubyte TimesRoman24_Character_211[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  0,128,  0,  0, 96,  0,  0, 56,  0,  0, 24,  0};
    const GLubyte TimesRoman24_Character_212[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  4,  8,  0,  3, 48,  0,  1,224,  0,  0,192,  0};
    const GLubyte TimesRoman24_Character_213[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  0,  0,  0,  2,112,  0,  1,200,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_214[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 28,  0, 28, 14,  0, 48,  3,  0, 48,  3,  0, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 96,  1,128, 48,  3,  0, 48,  3,  0, 28, 14,  0, 14, 28,  0,  3,240,  0,  0,  0,  0,  0,  0,  0,  3, 48,  0,  3, 48,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_215[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 32, 16, 48, 48, 24, 96, 12,192,  7,128,  3,  0,  7,128, 12,192, 24, 96, 48, 48, 32, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_216[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0, 19,240,  0, 14, 28,  0, 28, 14,  0, 52,  3,  0, 50,  3,  0, 97,  1,128, 97,  1,128, 96,129,128, 96,129,128, 96, 65,128, 96, 65,128, 96, 33,128, 48, 35,  0, 48, 19,  0, 28, 14,  0, 14, 28,  0,  3,242,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_217[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 24,  0, 12,  4,  0, 24,  4,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0,126, 15,128,  0,  0,  0,  0, 32,  0,  0,192,  0,  3,128,  0,  3,  0,  0};
    const GLubyte TimesRoman24_Character_218[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 24,  0, 12,  4,  0, 24,  4,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0,126, 15,128,  0,  0,  0,  0,128,  0,  0, 96,  0,  0, 56,  0,  0, 24,  0};
    const GLubyte TimesRoman24_Character_219[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 24,  0, 12,  4,  0, 24,  4,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0,126, 15,128,  0,  0,  0,  4,  8,  0,  3, 48,  0,  1,224,  0,  0,192,  0};
    const GLubyte TimesRoman24_Character_220[] = { 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,240,  0, 14, 24,  0, 12,  4,  0, 24,  4,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0, 24,  2,  0,126, 15,128,  0,  0,  0,  0,  0,  0,  3, 24,  0,  3, 24,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_221[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,224,  1,128,  1,128,  1,128,  1,128,  1,128,  1,128,  3,192,  3, 64,  6, 96,  6, 32, 12, 48, 28, 16, 24, 24, 56,  8, 48, 12,252, 63,  0,  0,  1,  0,  0,192,  0,112,  0, 48};
    const GLubyte TimesRoman24_Character_222[] = { 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,  0, 24,  0, 24,  0, 24,  0, 31,224, 24, 56, 24, 24, 24, 12, 24, 12, 24, 12, 24, 24, 24, 56, 31,224, 24,  0, 24,  0, 24,  0,126,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_223[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,115,128, 54, 64, 54, 96, 48, 96, 48, 96, 48,224, 48,192, 49,192, 51,128, 54,  0, 49,128, 48,192, 48,192, 48,192, 48,192, 25,128, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_224[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0,  2,  0, 12,  0, 56,  0, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_225[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0,  8,  0,  6,  0,  3,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_226[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0, 33,  0, 18,  0, 30,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_227[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0,  0,  0, 46,  0, 29,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_228[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0,  0,  0, 51,  0, 51,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_229[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,192,125,128, 99,128, 97,128, 97,128, 49,128, 29,128,  7,128,  1,128, 49,128, 51,128, 31,  0,  0,  0, 14,  0, 17,  0, 17,  0, 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_230[] = { 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,120,125,252, 99,194, 97,128, 97,128, 49,128, 29,128,  7,254,  1,134, 49,134, 51,204, 30,120,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_231[] = { 11,  0,  0, 30,  0, 51,  0,  3,  0, 15,  0, 12,  0,  4,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0, 96,  0, 96,  0, 32,192, 49,192, 15,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_232[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0,127,192, 96,192, 32,192, 49,128, 15,  0,  0,  0,  2,  0, 12,  0, 56,  0, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_233[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0,127,192, 96,192, 32,192, 49,128, 15,  0,  0,  0,  8,  0,  6,  0,  3,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_234[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0,127,192, 96,192, 32,192, 49,128, 15,  0,  0,  0, 16,128,  9,  0, 15,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_235[] = { 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 63,128, 56, 64,112,  0, 96,  0, 96,  0, 96,  0,127,192, 96,192, 32,192, 49,128, 15,  0,  0,  0,  0,  0, 25,128, 25,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_236[] = {  6,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0,  8, 48,224,192,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_237[] = {  6,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0, 64, 48, 28, 12,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_238[] = {  6,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0,132, 72,120, 48,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_239[] = {  6,  0,  0,  0,  0,  0,  0,  0,120, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,112,  0,  0,204,204,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_240[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,128, 99,  0, 30,  0, 15,  0, 56,192, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_241[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,120,240, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 56,224, 55,192,115,128,  0,  0,  0,  0, 19,128, 14, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_242[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,  0,  0,  0,  1,  0,  6,  0, 28,  0, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_243[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,  0,  0,  0,  4,  0,  3,  0,  1,192,  0,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_244[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,  0,  0,  0, 16,128,  9,  0, 15,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_245[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,  0,  0,  0,  0,  0, 19,128, 14, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_246[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  0, 57,192, 48,192, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 48,192, 57,192, 15,  0,  0,  0,  0,  0, 25,128, 25,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_247[] = { 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  3,  0,  0,  0,  0,  0,127,248,127,248,  0,  0,  0,  0,  3,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_248[] = { 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96,  0,111,  0, 57,192, 56,192,104, 96,108, 96,100, 96,102, 96, 98, 96, 99, 96, 49,192, 57,192, 15, 96,  0, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_249[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,112, 31, 96, 56,224, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96,112,224,  0,  0,  1,  0,  6,  0, 28,  0, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_250[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,112, 31, 96, 56,224, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96,112,224,  0,  0,  4,  0,  3,  0,  1,192,  0,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_251[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,112, 31, 96, 56,224, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96,112,224,  0,  0, 16,128,  9,  0, 15,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_252[] = { 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,112, 31, 96, 56,224, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96,112,224,  0,  0,  0,  0, 25,128, 25,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_253[] = { 11,  0,  0,  0,  0,224,  0,240,  0, 24,  0,  8,  0, 12,  0,  4,  0, 14,  0, 14,  0, 26,  0, 25,  0, 25,  0, 49,  0, 48,128, 48,128, 96,128, 96,192,241,224,  0,  0,  8,  0,  6,  0,  3,128,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_254[] = { 12,  0,  0,  0,  0,120,  0, 48,  0, 48,  0, 48,  0, 48,  0, 55,  0, 57,192, 48,192, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48, 96, 48,192, 57,192, 55,  0, 48,  0, 48,  0, 48,  0, 48,  0,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};
    const GLubyte TimesRoman24_Character_255[] = { 11,  0,  0,  0,  0,224,  0,240,  0, 24,  0,  8,  0, 12,  0,  4,  0, 14,  0, 14,  0, 26,  0, 25,  0, 25,  0, 49,  0, 48,128, 48,128, 96,128, 96,192,241,224,  0,  0,  0,  0, 51,  0, 51,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};

    /* The font characters mapping: */
    const GLubyte* TimesRoman24_Character_Map[] = {TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,
                                                   TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,
                                                   TimesRoman24_Character_032,TimesRoman24_Character_033,TimesRoman24_Character_034,TimesRoman24_Character_035,TimesRoman24_Character_036,TimesRoman24_Character_037,TimesRoman24_Character_038,TimesRoman24_Character_039,TimesRoman24_Character_040,TimesRoman24_Character_041,TimesRoman24_Character_042,TimesRoman24_Character_043,TimesRoman24_Character_044,TimesRoman24_Character_045,TimesRoman24_Character_046,TimesRoman24_Character_047,
                                                   TimesRoman24_Character_048,TimesRoman24_Character_049,TimesRoman24_Character_050,TimesRoman24_Character_051,TimesRoman24_Character_052,TimesRoman24_Character_053,TimesRoman24_Character_054,TimesRoman24_Character_055,TimesRoman24_Character_056,TimesRoman24_Character_057,TimesRoman24_Character_058,TimesRoman24_Character_059,TimesRoman24_Character_060,TimesRoman24_Character_061,TimesRoman24_Character_062,TimesRoman24_Character_063,
                                                   TimesRoman24_Character_064,TimesRoman24_Character_065,TimesRoman24_Character_066,TimesRoman24_Character_067,TimesRoman24_Character_068,TimesRoman24_Character_069,TimesRoman24_Character_070,TimesRoman24_Character_071,TimesRoman24_Character_072,TimesRoman24_Character_073,TimesRoman24_Character_074,TimesRoman24_Character_075,TimesRoman24_Character_076,TimesRoman24_Character_077,TimesRoman24_Character_078,TimesRoman24_Character_079,
                                                   TimesRoman24_Character_080,TimesRoman24_Character_081,TimesRoman24_Character_082,TimesRoman24_Character_083,TimesRoman24_Character_084,TimesRoman24_Character_085,TimesRoman24_Character_086,TimesRoman24_Character_087,TimesRoman24_Character_088,TimesRoman24_Character_089,TimesRoman24_Character_090,TimesRoman24_Character_091,TimesRoman24_Character_092,TimesRoman24_Character_093,TimesRoman24_Character_094,TimesRoman24_Character_095,
                                                   TimesRoman24_Character_096,TimesRoman24_Character_097,TimesRoman24_Character_098,TimesRoman24_Character_099,TimesRoman24_Character_100,TimesRoman24_Character_101,TimesRoman24_Character_102,TimesRoman24_Character_103,TimesRoman24_Character_104,TimesRoman24_Character_105,TimesRoman24_Character_106,TimesRoman24_Character_107,TimesRoman24_Character_108,TimesRoman24_Character_109,TimesRoman24_Character_110,TimesRoman24_Character_111,
                                                   TimesRoman24_Character_112,TimesRoman24_Character_113,TimesRoman24_Character_114,TimesRoman24_Character_115,TimesRoman24_Character_116,TimesRoman24_Character_117,TimesRoman24_Character_118,TimesRoman24_Character_119,TimesRoman24_Character_120,TimesRoman24_Character_121,TimesRoman24_Character_122,TimesRoman24_Character_123,TimesRoman24_Character_124,TimesRoman24_Character_125,TimesRoman24_Character_126,TimesRoman24_Character_032,
                                                   TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,
                                                   TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,TimesRoman24_Character_032,
                                                   TimesRoman24_Character_160,TimesRoman24_Character_161,TimesRoman24_Character_162,TimesRoman24_Character_163,TimesRoman24_Character_164,TimesRoman24_Character_165,TimesRoman24_Character_166,TimesRoman24_Character_167,TimesRoman24_Character_168,TimesRoman24_Character_169,TimesRoman24_Character_170,TimesRoman24_Character_171,TimesRoman24_Character_172,TimesRoman24_Character_173,TimesRoman24_Character_174,TimesRoman24_Character_175,
                                                   TimesRoman24_Character_176,TimesRoman24_Character_177,TimesRoman24_Character_178,TimesRoman24_Character_179,TimesRoman24_Character_180,TimesRoman24_Character_181,TimesRoman24_Character_182,TimesRoman24_Character_183,TimesRoman24_Character_184,TimesRoman24_Character_185,TimesRoman24_Character_186,TimesRoman24_Character_187,TimesRoman24_Character_188,TimesRoman24_Character_189,TimesRoman24_Character_190,TimesRoman24_Character_191,
                                                   TimesRoman24_Character_192,TimesRoman24_Character_193,TimesRoman24_Character_194,TimesRoman24_Character_195,TimesRoman24_Character_196,TimesRoman24_Character_197,TimesRoman24_Character_198,TimesRoman24_Character_199,TimesRoman24_Character_200,TimesRoman24_Character_201,TimesRoman24_Character_202,TimesRoman24_Character_203,TimesRoman24_Character_204,TimesRoman24_Character_205,TimesRoman24_Character_206,TimesRoman24_Character_207,
                                                   TimesRoman24_Character_208,TimesRoman24_Character_209,TimesRoman24_Character_210,TimesRoman24_Character_211,TimesRoman24_Character_212,TimesRoman24_Character_213,TimesRoman24_Character_214,TimesRoman24_Character_215,TimesRoman24_Character_216,TimesRoman24_Character_217,TimesRoman24_Character_218,TimesRoman24_Character_219,TimesRoman24_Character_220,TimesRoman24_Character_221,TimesRoman24_Character_222,TimesRoman24_Character_223,
                                                   TimesRoman24_Character_224,TimesRoman24_Character_225,TimesRoman24_Character_226,TimesRoman24_Character_227,TimesRoman24_Character_228,TimesRoman24_Character_229,TimesRoman24_Character_230,TimesRoman24_Character_231,TimesRoman24_Character_232,TimesRoman24_Character_233,TimesRoman24_Character_234,TimesRoman24_Character_235,TimesRoman24_Character_236,TimesRoman24_Character_237,TimesRoman24_Character_238,TimesRoman24_Character_239,
                                                   TimesRoman24_Character_240,TimesRoman24_Character_241,TimesRoman24_Character_242,TimesRoman24_Character_243,TimesRoman24_Character_244,TimesRoman24_Character_245,TimesRoman24_Character_246,TimesRoman24_Character_247,TimesRoman24_Character_248,TimesRoman24_Character_249,TimesRoman24_Character_250,TimesRoman24_Character_251,TimesRoman24_Character_252,TimesRoman24_Character_253,TimesRoman24_Character_254,TimesRoman24_Character_255,NULL};

    /* The font structure: */
    const Font fontTimesRoman24 = { "-adobe-times-medium-r-normal--24-240-75-75-p-124-iso8859-1", 256, 29, TimesRoman24_Character_Map, 0, 7 };

    const Font* fontByID(int fontID)
    {
        static const Font* fonts[] = 
        {
            &fontFixed8x13,
            &fontFixed9x15,
            &fontTimesRoman10,
            &fontTimesRoman24,
            &fontHelvetica10,
            &fontHelvetica12,
            &fontHelvetica18
        };

        return fonts[fontID];
    }

    void bitmapString(int fontID, const unsigned char* string)
    {
        if (!string || !string[0])
            return;

        const Font* font = fontByID(fontID);

        glPushClientAttrib(GL_CLIENT_PIXEL_STORE_BIT);
        glPixelStorei(GL_UNPACK_SWAP_BYTES,  GL_FALSE);
        glPixelStorei(GL_UNPACK_LSB_FIRST,   GL_FALSE);
        glPixelStorei(GL_UNPACK_ROW_LENGTH,  0       );
        glPixelStorei(GL_UNPACK_SKIP_ROWS,   0       );
        glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0       );
        glPixelStorei(GL_UNPACK_ALIGNMENT,   1       );

        unsigned char c;
        float x = 0.0f;

        // Step through the string, drawing each character.
        // A newline will simply translate the next character's insertion
        // point back to the start of the line and down one line.
        glBitmap(0, 0, 0, 0, -x, (float)-font->height, NULL);
        while (c = *string++)
        {
            if (c == '\n')
            {
                glBitmap(0, 0, 0, 0, -x, (float)-font->height, NULL);
                x = 0.0f;
            }
            else  // Not an EOL, draw the bitmap character
            {
                const GLubyte* face = font->characters[c];

                glBitmap(
                    face[0], font->height,    // Bitmap's width and height
                    font->xorig, font->yorig, // The origin in the font glyph
                    (float)(face[0]), 0.0,    // The raster advance; inc. x,y
                    (face + 1)                // The packed bitmap data...
                );

                x += (float)(face[0]);
            }
        }

        glPopClientAttrib();
    }
}

#endif /* HAVE_CUDA */
