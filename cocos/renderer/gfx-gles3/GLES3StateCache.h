#ifndef CC_GFXGLES3_STATE_CACHE_H_
#define CC_GFXGLES3_STATE_CACHE_H_

#include "gles3w.h"

CC_NAMESPACE_BEGIN

class GLES3StateCache : public Object {
 public:
  GLuint gl_array_buffer = 0;
  GLuint gl_element_array_buffer = 0;
  GLuint gl_uniform_buffer = 0;
  GLuint gl_bind_ubos[GFX_MAX_BUFFER_BINDINGS] = { 0 };
  GLuint gl_vao = 0;
  uint tex_uint = 0;
  GLuint gl_textures[GFX_MAX_TEXTURE_UNITS] = { 0 };
  GLuint gl_samplers[GFX_MAX_TEXTURE_UNITS] = { 0 };
  GLuint gl_program = 0;
   bool gl_enabled_attrib_locs[GFX_MAX_VERTEX_ATTRIBUTES] = { false };
  bool gl_current_attrib_locs[GFX_MAX_VERTEX_ATTRIBUTES] = { false };
  GLuint gl_fbo = 0;
  GLuint gl_read_fbo = 0;
  GFXViewport viewport;
  GFXRect scissor;
  GFXRasterizerState rs;
  GFXDepthStencilState dss;
  GFXBlendState bs;
  bool is_cull_face_enabled = false;
  bool is_stencil_test_enabled = false;

  GLES3StateCache() {}
};

CC_NAMESPACE_END

#endif