/****************************************************************************
 Copyright (c) 2019-2022 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#include "gles2w.h"

#ifndef __OHOS__
    #define GL_GLES_PROTOTYPES 0
    #include <GLES2/gl2.h>
    #include <GLES2/gl2ext.h>
    #include <GLES2/gl2platform.h>
#else
    #define GL_GLES_PROTOTYPES 0
    #include <GLES3/gl32.h>
    #include <GLES3/gl3platform.h>
#endif
#include <KHR/khrplatform.h>

/**
 * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
 * The following section is auto-generated from GLES spec by running:
 * node tools/gles-wrangler-generator/generate.js
 * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
 */

/* GLES2W_GENERATE_GLES_DEFINITION */
/* GL_ES_VERSION_2_0 */
PFNGLACTIVETEXTUREPROC                       glActiveTexture;
PFNGLATTACHSHADERPROC                        glAttachShader;
PFNGLBINDATTRIBLOCATIONPROC                  glBindAttribLocation;
PFNGLBINDBUFFERPROC                          glBindBuffer;
PFNGLBINDFRAMEBUFFERPROC                     glBindFramebuffer;
PFNGLBINDRENDERBUFFERPROC                    glBindRenderbuffer;
PFNGLBINDTEXTUREPROC                         glBindTexture;
PFNGLBLENDCOLORPROC                          glBlendColor;
PFNGLBLENDEQUATIONPROC                       glBlendEquation;
PFNGLBLENDEQUATIONSEPARATEPROC               glBlendEquationSeparate;
PFNGLBLENDFUNCPROC                           glBlendFunc;
PFNGLBLENDFUNCSEPARATEPROC                   glBlendFuncSeparate;
PFNGLBUFFERDATAPROC                          glBufferData;
PFNGLBUFFERSUBDATAPROC                       glBufferSubData;
PFNGLCHECKFRAMEBUFFERSTATUSPROC              glCheckFramebufferStatus;
PFNGLCLEARPROC                               glClear;
PFNGLCLEARCOLORPROC                          glClearColor;
PFNGLCLEARDEPTHFPROC                         glClearDepthf;
PFNGLCLEARSTENCILPROC                        glClearStencil;
PFNGLCOLORMASKPROC                           glColorMask;
PFNGLCOMPILESHADERPROC                       glCompileShader;
PFNGLCOMPRESSEDTEXIMAGE2DPROC                glCompressedTexImage2D;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC             glCompressedTexSubImage2D;
PFNGLCOPYTEXIMAGE2DPROC                      glCopyTexImage2D;
PFNGLCOPYTEXSUBIMAGE2DPROC                   glCopyTexSubImage2D;
PFNGLCREATEPROGRAMPROC                       glCreateProgram;
PFNGLCREATESHADERPROC                        glCreateShader;
PFNGLCULLFACEPROC                            glCullFace;
PFNGLDELETEBUFFERSPROC                       glDeleteBuffers;
PFNGLDELETEFRAMEBUFFERSPROC                  glDeleteFramebuffers;
PFNGLDELETEPROGRAMPROC                       glDeleteProgram;
PFNGLDELETERENDERBUFFERSPROC                 glDeleteRenderbuffers;
PFNGLDELETESHADERPROC                        glDeleteShader;
PFNGLDELETETEXTURESPROC                      glDeleteTextures;
PFNGLDEPTHFUNCPROC                           glDepthFunc;
PFNGLDEPTHMASKPROC                           glDepthMask;
PFNGLDEPTHRANGEFPROC                         glDepthRangef;
PFNGLDETACHSHADERPROC                        glDetachShader;
PFNGLDISABLEPROC                             glDisable;
PFNGLDISABLEVERTEXATTRIBARRAYPROC            glDisableVertexAttribArray;
PFNGLDRAWARRAYSPROC                          glDrawArrays;
PFNGLDRAWELEMENTSPROC                        glDrawElements;
PFNGLENABLEPROC                              glEnable;
PFNGLENABLEVERTEXATTRIBARRAYPROC             glEnableVertexAttribArray;
PFNGLFINISHPROC                              glFinish;
PFNGLFLUSHPROC                               glFlush;
PFNGLFRAMEBUFFERRENDERBUFFERPROC             glFramebufferRenderbuffer;
PFNGLFRAMEBUFFERTEXTURE2DPROC                glFramebufferTexture2D;
PFNGLFRONTFACEPROC                           glFrontFace;
PFNGLGENBUFFERSPROC                          glGenBuffers;
PFNGLGENERATEMIPMAPPROC                      glGenerateMipmap;
PFNGLGENFRAMEBUFFERSPROC                     glGenFramebuffers;
PFNGLGENRENDERBUFFERSPROC                    glGenRenderbuffers;
PFNGLGENTEXTURESPROC                         glGenTextures;
PFNGLGETACTIVEATTRIBPROC                     glGetActiveAttrib;
PFNGLGETACTIVEUNIFORMPROC                    glGetActiveUniform;
PFNGLGETATTACHEDSHADERSPROC                  glGetAttachedShaders;
PFNGLGETATTRIBLOCATIONPROC                   glGetAttribLocation;
PFNGLGETBOOLEANVPROC                         glGetBooleanv;
PFNGLGETBUFFERPARAMETERIVPROC                glGetBufferParameteriv;
PFNGLGETERRORPROC                            glGetError;
PFNGLGETFLOATVPROC                           glGetFloatv;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
PFNGLGETINTEGERVPROC                         glGetIntegerv;
PFNGLGETPROGRAMIVPROC                        glGetProgramiv;
PFNGLGETPROGRAMINFOLOGPROC                   glGetProgramInfoLog;
PFNGLGETRENDERBUFFERPARAMETERIVPROC          glGetRenderbufferParameteriv;
PFNGLGETSHADERIVPROC                         glGetShaderiv;
PFNGLGETSHADERINFOLOGPROC                    glGetShaderInfoLog;
PFNGLGETSHADERPRECISIONFORMATPROC            glGetShaderPrecisionFormat;
PFNGLGETSHADERSOURCEPROC                     glGetShaderSource;
PFNGLGETSTRINGPROC                           glGetString;
PFNGLGETTEXPARAMETERFVPROC                   glGetTexParameterfv;
PFNGLGETTEXPARAMETERIVPROC                   glGetTexParameteriv;
PFNGLGETUNIFORMFVPROC                        glGetUniformfv;
PFNGLGETUNIFORMIVPROC                        glGetUniformiv;
PFNGLGETUNIFORMLOCATIONPROC                  glGetUniformLocation;
PFNGLGETVERTEXATTRIBFVPROC                   glGetVertexAttribfv;
PFNGLGETVERTEXATTRIBIVPROC                   glGetVertexAttribiv;
PFNGLGETVERTEXATTRIBPOINTERVPROC             glGetVertexAttribPointerv;
PFNGLHINTPROC                                glHint;
PFNGLISBUFFERPROC                            glIsBuffer;
PFNGLISENABLEDPROC                           glIsEnabled;
PFNGLISFRAMEBUFFERPROC                       glIsFramebuffer;
PFNGLISPROGRAMPROC                           glIsProgram;
PFNGLISRENDERBUFFERPROC                      glIsRenderbuffer;
PFNGLISSHADERPROC                            glIsShader;
PFNGLISTEXTUREPROC                           glIsTexture;
PFNGLLINEWIDTHPROC                           glLineWidth;
PFNGLLINKPROGRAMPROC                         glLinkProgram;
PFNGLPIXELSTOREIPROC                         glPixelStorei;
PFNGLPOLYGONOFFSETPROC                       glPolygonOffset;
PFNGLREADPIXELSPROC                          glReadPixels;
PFNGLRELEASESHADERCOMPILERPROC               glReleaseShaderCompiler;
PFNGLRENDERBUFFERSTORAGEPROC                 glRenderbufferStorage;
PFNGLSAMPLECOVERAGEPROC                      glSampleCoverage;
PFNGLSCISSORPROC                             glScissor;
PFNGLSHADERBINARYPROC                        glShaderBinary;
PFNGLSHADERSOURCEPROC                        glShaderSource;
PFNGLSTENCILFUNCPROC                         glStencilFunc;
PFNGLSTENCILFUNCSEPARATEPROC                 glStencilFuncSeparate;
PFNGLSTENCILMASKPROC                         glStencilMask;
PFNGLSTENCILMASKSEPARATEPROC                 glStencilMaskSeparate;
PFNGLSTENCILOPPROC                           glStencilOp;
PFNGLSTENCILOPSEPARATEPROC                   glStencilOpSeparate;
PFNGLTEXIMAGE2DPROC                          glTexImage2D;
PFNGLTEXPARAMETERFPROC                       glTexParameterf;
PFNGLTEXPARAMETERFVPROC                      glTexParameterfv;
PFNGLTEXPARAMETERIPROC                       glTexParameteri;
PFNGLTEXPARAMETERIVPROC                      glTexParameteriv;
PFNGLTEXSUBIMAGE2DPROC                       glTexSubImage2D;
PFNGLUNIFORM1FPROC                           glUniform1f;
PFNGLUNIFORM1FVPROC                          glUniform1fv;
PFNGLUNIFORM1IPROC                           glUniform1i;
PFNGLUNIFORM1IVPROC                          glUniform1iv;
PFNGLUNIFORM2FPROC                           glUniform2f;
PFNGLUNIFORM2FVPROC                          glUniform2fv;
PFNGLUNIFORM2IPROC                           glUniform2i;
PFNGLUNIFORM2IVPROC                          glUniform2iv;
PFNGLUNIFORM3FPROC                           glUniform3f;
PFNGLUNIFORM3FVPROC                          glUniform3fv;
PFNGLUNIFORM3IPROC                           glUniform3i;
PFNGLUNIFORM3IVPROC                          glUniform3iv;
PFNGLUNIFORM4FPROC                           glUniform4f;
PFNGLUNIFORM4FVPROC                          glUniform4fv;
PFNGLUNIFORM4IPROC                           glUniform4i;
PFNGLUNIFORM4IVPROC                          glUniform4iv;
PFNGLUNIFORMMATRIX2FVPROC                    glUniformMatrix2fv;
PFNGLUNIFORMMATRIX3FVPROC                    glUniformMatrix3fv;
PFNGLUNIFORMMATRIX4FVPROC                    glUniformMatrix4fv;
PFNGLUSEPROGRAMPROC                          glUseProgram;
PFNGLVALIDATEPROGRAMPROC                     glValidateProgram;
PFNGLVERTEXATTRIB1FPROC                      glVertexAttrib1f;
PFNGLVERTEXATTRIB1FVPROC                     glVertexAttrib1fv;
PFNGLVERTEXATTRIB2FPROC                      glVertexAttrib2f;
PFNGLVERTEXATTRIB2FVPROC                     glVertexAttrib2fv;
PFNGLVERTEXATTRIB3FPROC                      glVertexAttrib3f;
PFNGLVERTEXATTRIB3FVPROC                     glVertexAttrib3fv;
PFNGLVERTEXATTRIB4FPROC                      glVertexAttrib4f;
PFNGLVERTEXATTRIB4FVPROC                     glVertexAttrib4fv;
PFNGLVERTEXATTRIBPOINTERPROC                 glVertexAttribPointer;
PFNGLVIEWPORTPROC                            glViewport;

#if defined(GL_AMD_framebuffer_multisample_advanced)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC      glRenderbufferStorageMultisampleAdvancedAMD;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glNamedRenderbufferStorageMultisampleAdvancedAMD;
#endif /* defined(GL_AMD_framebuffer_multisample_advanced) */

#if defined(GL_AMD_performance_monitor)
PFNGLGETPERFMONITORGROUPSAMDPROC        glGetPerfMonitorGroupsAMD;
PFNGLGETPERFMONITORCOUNTERSAMDPROC      glGetPerfMonitorCountersAMD;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC   glGetPerfMonitorGroupStringAMD;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC   glGetPerfMonitorCounterInfoAMD;
PFNGLGENPERFMONITORSAMDPROC             glGenPerfMonitorsAMD;
PFNGLDELETEPERFMONITORSAMDPROC          glDeletePerfMonitorsAMD;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC   glSelectPerfMonitorCountersAMD;
PFNGLBEGINPERFMONITORAMDPROC            glBeginPerfMonitorAMD;
PFNGLENDPERFMONITORAMDPROC              glEndPerfMonitorAMD;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC   glGetPerfMonitorCounterDataAMD;
#endif /* defined(GL_AMD_performance_monitor) */

#if defined(GL_ANGLE_framebuffer_blit)
PFNGLBLITFRAMEBUFFERANGLEPROC glBlitFramebufferANGLE;
#endif /* defined(GL_ANGLE_framebuffer_blit) */

#if defined(GL_ANGLE_framebuffer_multisample)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC glRenderbufferStorageMultisampleANGLE;
#endif /* defined(GL_ANGLE_framebuffer_multisample) */

#if defined(GL_ANGLE_instanced_arrays)
PFNGLDRAWARRAYSINSTANCEDANGLEPROC   glDrawArraysInstancedANGLE;
PFNGLDRAWELEMENTSINSTANCEDANGLEPROC glDrawElementsInstancedANGLE;
PFNGLVERTEXATTRIBDIVISORANGLEPROC   glVertexAttribDivisorANGLE;
#endif /* defined(GL_ANGLE_instanced_arrays) */

#if defined(GL_ANGLE_translated_shader_source)
PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC glGetTranslatedShaderSourceANGLE;
#endif /* defined(GL_ANGLE_translated_shader_source) */

#if defined(GL_APPLE_copy_texture_levels)
PFNGLCOPYTEXTURELEVELSAPPLEPROC glCopyTextureLevelsAPPLE;
#endif /* defined(GL_APPLE_copy_texture_levels) */

#if defined(GL_APPLE_framebuffer_multisample)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC glRenderbufferStorageMultisampleAPPLE;
PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC  glResolveMultisampleFramebufferAPPLE;
#endif /* defined(GL_APPLE_framebuffer_multisample) */

#if defined(GL_APPLE_sync)
PFNGLFENCESYNCAPPLEPROC      glFenceSyncAPPLE;
PFNGLISSYNCAPPLEPROC         glIsSyncAPPLE;
PFNGLDELETESYNCAPPLEPROC     glDeleteSyncAPPLE;
PFNGLCLIENTWAITSYNCAPPLEPROC glClientWaitSyncAPPLE;
PFNGLWAITSYNCAPPLEPROC       glWaitSyncAPPLE;
PFNGLGETINTEGER64VAPPLEPROC  glGetInteger64vAPPLE;
PFNGLGETSYNCIVAPPLEPROC      glGetSyncivAPPLE;
#endif /* defined(GL_APPLE_sync) */

#if defined(GL_EXT_EGL_image_storage)
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glEGLImageTargetTexStorageEXT;

PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glEGLImageTargetTextureStorageEXT;
#endif /* defined(GL_EXT_EGL_image_storage) */

#if defined(GL_EXT_base_instance)
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC             glDrawArraysInstancedBaseInstanceEXT;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC           glDrawElementsInstancedBaseInstanceEXT;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC glDrawElementsInstancedBaseVertexBaseInstanceEXT;
#endif /* defined(GL_EXT_base_instance) */

#if defined(GL_EXT_blend_func_extended)
PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC     glBindFragDataLocationIndexedEXT;
PFNGLBINDFRAGDATALOCATIONEXTPROC            glBindFragDataLocationEXT;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC glGetProgramResourceLocationIndexEXT;
PFNGLGETFRAGDATAINDEXEXTPROC                glGetFragDataIndexEXT;
#endif /* defined(GL_EXT_blend_func_extended) */

#if defined(GL_EXT_buffer_storage)
PFNGLBUFFERSTORAGEEXTPROC glBufferStorageEXT;
#endif /* defined(GL_EXT_buffer_storage) */

#if defined(GL_EXT_clear_texture)
PFNGLCLEARTEXIMAGEEXTPROC    glClearTexImageEXT;
PFNGLCLEARTEXSUBIMAGEEXTPROC glClearTexSubImageEXT;
#endif /* defined(GL_EXT_clear_texture) */

#if defined(GL_EXT_clip_control)
PFNGLCLIPCONTROLEXTPROC glClipControlEXT;
#endif /* defined(GL_EXT_clip_control) */

#if defined(GL_EXT_copy_image)
PFNGLCOPYIMAGESUBDATAEXTPROC glCopyImageSubDataEXT;
#endif /* defined(GL_EXT_copy_image) */

#if defined(GL_EXT_debug_label)
PFNGLLABELOBJECTEXTPROC    glLabelObjectEXT;
PFNGLGETOBJECTLABELEXTPROC glGetObjectLabelEXT;
#endif /* defined(GL_EXT_debug_label) */

#if defined(GL_EXT_debug_marker)
PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarkerEXT;
PFNGLPUSHGROUPMARKEREXTPROC   glPushGroupMarkerEXT;
PFNGLPOPGROUPMARKEREXTPROC    glPopGroupMarkerEXT;
#endif /* defined(GL_EXT_debug_marker) */

#if defined(GL_EXT_discard_framebuffer)
PFNGLDISCARDFRAMEBUFFEREXTPROC glDiscardFramebufferEXT;
#endif /* defined(GL_EXT_discard_framebuffer) */

#if defined(GL_EXT_disjoint_timer_query)
PFNGLGENQUERIESEXTPROC          glGenQueriesEXT;
PFNGLDELETEQUERIESEXTPROC       glDeleteQueriesEXT;
PFNGLISQUERYEXTPROC             glIsQueryEXT;
PFNGLBEGINQUERYEXTPROC          glBeginQueryEXT;
PFNGLENDQUERYEXTPROC            glEndQueryEXT;
PFNGLQUERYCOUNTEREXTPROC        glQueryCounterEXT;
PFNGLGETQUERYIVEXTPROC          glGetQueryivEXT;
PFNGLGETQUERYOBJECTIVEXTPROC    glGetQueryObjectivEXT;
PFNGLGETQUERYOBJECTUIVEXTPROC   glGetQueryObjectuivEXT;
PFNGLGETQUERYOBJECTI64VEXTPROC  glGetQueryObjecti64vEXT;
PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;
PFNGLGETINTEGER64VEXTPROC       glGetInteger64vEXT;
#endif /* defined(GL_EXT_disjoint_timer_query) */

#if defined(GL_EXT_draw_buffers)
PFNGLDRAWBUFFERSEXTPROC glDrawBuffersEXT;
#endif /* defined(GL_EXT_draw_buffers) */

#if defined(GL_EXT_draw_buffers_indexed)
PFNGLENABLEIEXTPROC                glEnableiEXT;
PFNGLDISABLEIEXTPROC               glDisableiEXT;
PFNGLBLENDEQUATIONIEXTPROC         glBlendEquationiEXT;
PFNGLBLENDEQUATIONSEPARATEIEXTPROC glBlendEquationSeparateiEXT;
PFNGLBLENDFUNCIEXTPROC             glBlendFunciEXT;
PFNGLBLENDFUNCSEPARATEIEXTPROC     glBlendFuncSeparateiEXT;
PFNGLCOLORMASKIEXTPROC             glColorMaskiEXT;
PFNGLISENABLEDIEXTPROC             glIsEnablediEXT;
#endif /* defined(GL_EXT_draw_buffers_indexed) */

#if defined(GL_EXT_draw_elements_base_vertex)
PFNGLDRAWELEMENTSBASEVERTEXEXTPROC          glDrawElementsBaseVertexEXT;
PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC     glDrawRangeElementsBaseVertexEXT;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC glDrawElementsInstancedBaseVertexEXT;
PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC     glMultiDrawElementsBaseVertexEXT;
#endif /* defined(GL_EXT_draw_elements_base_vertex) */

#if defined(GL_EXT_draw_instanced)
PFNGLDRAWARRAYSINSTANCEDEXTPROC   glDrawArraysInstancedEXT;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;
#endif /* defined(GL_EXT_draw_instanced) */

#if defined(GL_EXT_draw_transform_feedback)
PFNGLDRAWTRANSFORMFEEDBACKEXTPROC          glDrawTransformFeedbackEXT;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC glDrawTransformFeedbackInstancedEXT;
#endif /* defined(GL_EXT_draw_transform_feedback) */

#if defined(GL_EXT_external_buffer)
PFNGLBUFFERSTORAGEEXTERNALEXTPROC      glBufferStorageExternalEXT;
PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC glNamedBufferStorageExternalEXT;
#endif /* defined(GL_EXT_external_buffer) */

#if defined(GL_EXT_geometry_shader)
PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;
#endif /* defined(GL_EXT_geometry_shader) */

#if defined(GL_EXT_instanced_arrays)
PFNGLVERTEXATTRIBDIVISOREXTPROC glVertexAttribDivisorEXT;
#endif /* defined(GL_EXT_instanced_arrays) */

#if defined(GL_EXT_map_buffer_range)
PFNGLMAPBUFFERRANGEEXTPROC         glMapBufferRangeEXT;
PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC glFlushMappedBufferRangeEXT;
#endif /* defined(GL_EXT_map_buffer_range) */

#if defined(GL_EXT_memory_object)
PFNGLGETUNSIGNEDBYTEVEXTPROC           glGetUnsignedBytevEXT;
PFNGLGETUNSIGNEDBYTEI_VEXTPROC         glGetUnsignedBytei_vEXT;
PFNGLDELETEMEMORYOBJECTSEXTPROC        glDeleteMemoryObjectsEXT;
PFNGLISMEMORYOBJECTEXTPROC             glIsMemoryObjectEXT;
PFNGLCREATEMEMORYOBJECTSEXTPROC        glCreateMemoryObjectsEXT;
PFNGLMEMORYOBJECTPARAMETERIVEXTPROC    glMemoryObjectParameterivEXT;
PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC glGetMemoryObjectParameterivEXT;
PFNGLTEXSTORAGEMEM2DEXTPROC            glTexStorageMem2DEXT;
PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC glTexStorageMem2DMultisampleEXT;
PFNGLTEXSTORAGEMEM3DEXTPROC            glTexStorageMem3DEXT;
PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC glTexStorageMem3DMultisampleEXT;
PFNGLBUFFERSTORAGEMEMEXTPROC           glBufferStorageMemEXT;

PFNGLTEXTURESTORAGEMEM2DEXTPROC            glTextureStorageMem2DEXT;
PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC glTextureStorageMem2DMultisampleEXT;
PFNGLTEXTURESTORAGEMEM3DEXTPROC            glTextureStorageMem3DEXT;
PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC glTextureStorageMem3DMultisampleEXT;
PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC          glNamedBufferStorageMemEXT;
#endif /* defined(GL_EXT_memory_object) */

#if defined(GL_EXT_memory_object_fd)
PFNGLIMPORTMEMORYFDEXTPROC glImportMemoryFdEXT;
#endif /* defined(GL_EXT_memory_object_fd) */

#if defined(GL_EXT_memory_object_win32)
PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC glImportMemoryWin32HandleEXT;
PFNGLIMPORTMEMORYWIN32NAMEEXTPROC   glImportMemoryWin32NameEXT;
#endif /* defined(GL_EXT_memory_object_win32) */

#if defined(GL_EXT_multi_draw_arrays)
PFNGLMULTIDRAWARRAYSEXTPROC   glMultiDrawArraysEXT;
PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;
#endif /* defined(GL_EXT_multi_draw_arrays) */

#if defined(GL_EXT_multi_draw_indirect)
PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC   glMultiDrawArraysIndirectEXT;
PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC glMultiDrawElementsIndirectEXT;
#endif /* defined(GL_EXT_multi_draw_indirect) */

#if defined(GL_EXT_multisampled_render_to_texture)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC  glRenderbufferStorageMultisampleEXT;
PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC glFramebufferTexture2DMultisampleEXT;
#endif /* defined(GL_EXT_multisampled_render_to_texture) */

#if defined(GL_EXT_multiview_draw_buffers)
PFNGLREADBUFFERINDEXEDEXTPROC  glReadBufferIndexedEXT;
PFNGLDRAWBUFFERSINDEXEDEXTPROC glDrawBuffersIndexedEXT;
PFNGLGETINTEGERI_VEXTPROC      glGetIntegeri_vEXT;
#endif /* defined(GL_EXT_multiview_draw_buffers) */

#if defined(GL_EXT_polygon_offset_clamp)
PFNGLPOLYGONOFFSETCLAMPEXTPROC glPolygonOffsetClampEXT;
#endif /* defined(GL_EXT_polygon_offset_clamp) */

#if defined(GL_EXT_primitive_bounding_box)
PFNGLPRIMITIVEBOUNDINGBOXEXTPROC glPrimitiveBoundingBoxEXT;
#endif /* defined(GL_EXT_primitive_bounding_box) */

#if defined(GL_EXT_raster_multisample)
PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT;
#endif /* defined(GL_EXT_raster_multisample) */

#if defined(GL_EXT_robustness)
PFNGLGETGRAPHICSRESETSTATUSEXTPROC glGetGraphicsResetStatusEXT;
PFNGLREADNPIXELSEXTPROC            glReadnPixelsEXT;
PFNGLGETNUNIFORMFVEXTPROC          glGetnUniformfvEXT;
PFNGLGETNUNIFORMIVEXTPROC          glGetnUniformivEXT;
#endif /* defined(GL_EXT_robustness) */

#if defined(GL_EXT_semaphore)
PFNGLGENSEMAPHORESEXTPROC              glGenSemaphoresEXT;
PFNGLDELETESEMAPHORESEXTPROC           glDeleteSemaphoresEXT;
PFNGLISSEMAPHOREEXTPROC                glIsSemaphoreEXT;
PFNGLSEMAPHOREPARAMETERUI64VEXTPROC    glSemaphoreParameterui64vEXT;
PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC glGetSemaphoreParameterui64vEXT;
PFNGLWAITSEMAPHOREEXTPROC              glWaitSemaphoreEXT;
PFNGLSIGNALSEMAPHOREEXTPROC            glSignalSemaphoreEXT;
#endif /* defined(GL_EXT_semaphore) */

#if defined(GL_EXT_semaphore_fd)
PFNGLIMPORTSEMAPHOREFDEXTPROC glImportSemaphoreFdEXT;
#endif /* defined(GL_EXT_semaphore_fd) */

#if defined(GL_EXT_semaphore_win32)
PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC glImportSemaphoreWin32HandleEXT;
PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC   glImportSemaphoreWin32NameEXT;
#endif /* defined(GL_EXT_semaphore_win32) */

#if defined(GL_EXT_separate_shader_objects)
PFNGLACTIVESHADERPROGRAMEXTPROC       glActiveShaderProgramEXT;
PFNGLBINDPROGRAMPIPELINEEXTPROC       glBindProgramPipelineEXT;
PFNGLCREATESHADERPROGRAMVEXTPROC      glCreateShaderProgramvEXT;
PFNGLDELETEPROGRAMPIPELINESEXTPROC    glDeleteProgramPipelinesEXT;
PFNGLGENPROGRAMPIPELINESEXTPROC       glGenProgramPipelinesEXT;
PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC glGetProgramPipelineInfoLogEXT;
PFNGLGETPROGRAMPIPELINEIVEXTPROC      glGetProgramPipelineivEXT;
PFNGLISPROGRAMPIPELINEEXTPROC         glIsProgramPipelineEXT;
PFNGLPROGRAMPARAMETERIEXTPROC         glProgramParameteriEXT;
PFNGLPROGRAMUNIFORM1FEXTPROC          glProgramUniform1fEXT;
PFNGLPROGRAMUNIFORM1FVEXTPROC         glProgramUniform1fvEXT;
PFNGLPROGRAMUNIFORM1IEXTPROC          glProgramUniform1iEXT;
PFNGLPROGRAMUNIFORM1IVEXTPROC         glProgramUniform1ivEXT;
PFNGLPROGRAMUNIFORM2FEXTPROC          glProgramUniform2fEXT;
PFNGLPROGRAMUNIFORM2FVEXTPROC         glProgramUniform2fvEXT;
PFNGLPROGRAMUNIFORM2IEXTPROC          glProgramUniform2iEXT;
PFNGLPROGRAMUNIFORM2IVEXTPROC         glProgramUniform2ivEXT;
PFNGLPROGRAMUNIFORM3FEXTPROC          glProgramUniform3fEXT;
PFNGLPROGRAMUNIFORM3FVEXTPROC         glProgramUniform3fvEXT;
PFNGLPROGRAMUNIFORM3IEXTPROC          glProgramUniform3iEXT;
PFNGLPROGRAMUNIFORM3IVEXTPROC         glProgramUniform3ivEXT;
PFNGLPROGRAMUNIFORM4FEXTPROC          glProgramUniform4fEXT;
PFNGLPROGRAMUNIFORM4FVEXTPROC         glProgramUniform4fvEXT;
PFNGLPROGRAMUNIFORM4IEXTPROC          glProgramUniform4iEXT;
PFNGLPROGRAMUNIFORM4IVEXTPROC         glProgramUniform4ivEXT;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC   glProgramUniformMatrix2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC   glProgramUniformMatrix3fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC   glProgramUniformMatrix4fvEXT;
PFNGLUSEPROGRAMSTAGESEXTPROC          glUseProgramStagesEXT;
PFNGLVALIDATEPROGRAMPIPELINEEXTPROC   glValidateProgramPipelineEXT;

PFNGLPROGRAMUNIFORM1UIEXTPROC         glProgramUniform1uiEXT;
PFNGLPROGRAMUNIFORM2UIEXTPROC         glProgramUniform2uiEXT;
PFNGLPROGRAMUNIFORM3UIEXTPROC         glProgramUniform3uiEXT;
PFNGLPROGRAMUNIFORM4UIEXTPROC         glProgramUniform4uiEXT;
PFNGLPROGRAMUNIFORM1UIVEXTPROC        glProgramUniform1uivEXT;
PFNGLPROGRAMUNIFORM2UIVEXTPROC        glProgramUniform2uivEXT;
PFNGLPROGRAMUNIFORM3UIVEXTPROC        glProgramUniform3uivEXT;
PFNGLPROGRAMUNIFORM4UIVEXTPROC        glProgramUniform4uivEXT;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;
#endif /* defined(GL_EXT_separate_shader_objects) */

#if defined(GL_EXT_shader_framebuffer_fetch_non_coherent)
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glFramebufferFetchBarrierEXT;
#endif /* defined(GL_EXT_shader_framebuffer_fetch_non_coherent) */

#if defined(GL_EXT_shader_pixel_local_storage2)
PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC    glFramebufferPixelLocalStorageSizeEXT;
PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC glGetFramebufferPixelLocalStorageSizeEXT;
PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC            glClearPixelLocalStorageuiEXT;
#endif /* defined(GL_EXT_shader_pixel_local_storage2) */

#if defined(GL_EXT_sparse_texture)
PFNGLTEXPAGECOMMITMENTEXTPROC glTexPageCommitmentEXT;
#endif /* defined(GL_EXT_sparse_texture) */

#if defined(GL_EXT_tessellation_shader)
PFNGLPATCHPARAMETERIEXTPROC glPatchParameteriEXT;
#endif /* defined(GL_EXT_tessellation_shader) */

#if defined(GL_EXT_texture_border_clamp)
PFNGLTEXPARAMETERIIVEXTPROC         glTexParameterIivEXT;
PFNGLTEXPARAMETERIUIVEXTPROC        glTexParameterIuivEXT;
PFNGLGETTEXPARAMETERIIVEXTPROC      glGetTexParameterIivEXT;
PFNGLGETTEXPARAMETERIUIVEXTPROC     glGetTexParameterIuivEXT;
PFNGLSAMPLERPARAMETERIIVEXTPROC     glSamplerParameterIivEXT;
PFNGLSAMPLERPARAMETERIUIVEXTPROC    glSamplerParameterIuivEXT;
PFNGLGETSAMPLERPARAMETERIIVEXTPROC  glGetSamplerParameterIivEXT;
PFNGLGETSAMPLERPARAMETERIUIVEXTPROC glGetSamplerParameterIuivEXT;
#endif /* defined(GL_EXT_texture_border_clamp) */

#if defined(GL_EXT_texture_buffer)
PFNGLTEXBUFFEREXTPROC      glTexBufferEXT;
PFNGLTEXBUFFERRANGEEXTPROC glTexBufferRangeEXT;
#endif /* defined(GL_EXT_texture_buffer) */

#if defined(GL_EXT_texture_storage)
PFNGLTEXSTORAGE1DEXTPROC glTexStorage1DEXT;
PFNGLTEXSTORAGE2DEXTPROC glTexStorage2DEXT;
PFNGLTEXSTORAGE3DEXTPROC glTexStorage3DEXT;

PFNGLTEXTURESTORAGE1DEXTPROC glTextureStorage1DEXT;
PFNGLTEXTURESTORAGE2DEXTPROC glTextureStorage2DEXT;
PFNGLTEXTURESTORAGE3DEXTPROC glTextureStorage3DEXT;
#endif /* defined(GL_EXT_texture_storage) */

#if defined(GL_EXT_texture_view)
PFNGLTEXTUREVIEWEXTPROC glTextureViewEXT;
#endif /* defined(GL_EXT_texture_view) */

#if defined(GL_NV_timeline_semaphore)
PFNGLCREATESEMAPHORESNVPROC        glCreateSemaphoresNV;
PFNGLSEMAPHOREPARAMETERIVNVPROC    glSemaphoreParameterivNV;
PFNGLGETSEMAPHOREPARAMETERIVNVPROC glGetSemaphoreParameterivNV;
#endif /* defined(GL_NV_timeline_semaphore) */

#if defined(GL_EXT_win32_keyed_mutex)
PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC glAcquireKeyedMutexWin32EXT;
PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC glReleaseKeyedMutexWin32EXT;
#endif /* defined(GL_EXT_win32_keyed_mutex) */

#if defined(GL_EXT_window_rectangles)
PFNGLWINDOWRECTANGLESEXTPROC glWindowRectanglesEXT;
#endif /* defined(GL_EXT_window_rectangles) */

#if defined(GL_IMG_bindless_texture)
PFNGLGETTEXTUREHANDLEIMGPROC          glGetTextureHandleIMG;
PFNGLGETTEXTURESAMPLERHANDLEIMGPROC   glGetTextureSamplerHandleIMG;
PFNGLUNIFORMHANDLEUI64IMGPROC         glUniformHandleui64IMG;
PFNGLUNIFORMHANDLEUI64VIMGPROC        glUniformHandleui64vIMG;
PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC  glProgramUniformHandleui64IMG;
PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC glProgramUniformHandleui64vIMG;
#endif /* defined(GL_IMG_bindless_texture) */

#if defined(GL_IMG_framebuffer_downsample)
PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC    glFramebufferTexture2DDownsampleIMG;
PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC glFramebufferTextureLayerDownsampleIMG;
#endif /* defined(GL_IMG_framebuffer_downsample) */

#if defined(GL_IMG_multisampled_render_to_texture)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC  glRenderbufferStorageMultisampleIMG;
PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC glFramebufferTexture2DMultisampleIMG;
#endif /* defined(GL_IMG_multisampled_render_to_texture) */

#if defined(GL_INTEL_framebuffer_CMAA)
PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glApplyFramebufferAttachmentCMAAINTEL;
#endif /* defined(GL_INTEL_framebuffer_CMAA) */

#if defined(GL_INTEL_performance_query)
PFNGLBEGINPERFQUERYINTELPROC       glBeginPerfQueryINTEL;
PFNGLCREATEPERFQUERYINTELPROC      glCreatePerfQueryINTEL;
PFNGLDELETEPERFQUERYINTELPROC      glDeletePerfQueryINTEL;
PFNGLENDPERFQUERYINTELPROC         glEndPerfQueryINTEL;
PFNGLGETFIRSTPERFQUERYIDINTELPROC  glGetFirstPerfQueryIdINTEL;
PFNGLGETNEXTPERFQUERYIDINTELPROC   glGetNextPerfQueryIdINTEL;
PFNGLGETPERFCOUNTERINFOINTELPROC   glGetPerfCounterInfoINTEL;
PFNGLGETPERFQUERYDATAINTELPROC     glGetPerfQueryDataINTEL;
PFNGLGETPERFQUERYIDBYNAMEINTELPROC glGetPerfQueryIdByNameINTEL;
PFNGLGETPERFQUERYINFOINTELPROC     glGetPerfQueryInfoINTEL;
#endif /* defined(GL_INTEL_performance_query) */

#if defined(GL_KHR_blend_equation_advanced)
PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR;
#endif /* defined(GL_KHR_blend_equation_advanced) */

#if defined(GL_KHR_debug)
PFNGLDEBUGMESSAGECONTROLKHRPROC  glDebugMessageControlKHR;
PFNGLDEBUGMESSAGEINSERTKHRPROC   glDebugMessageInsertKHR;
PFNGLDEBUGMESSAGECALLBACKKHRPROC glDebugMessageCallbackKHR;
PFNGLGETDEBUGMESSAGELOGKHRPROC   glGetDebugMessageLogKHR;
PFNGLPUSHDEBUGGROUPKHRPROC       glPushDebugGroupKHR;
PFNGLPOPDEBUGGROUPKHRPROC        glPopDebugGroupKHR;
PFNGLOBJECTLABELKHRPROC          glObjectLabelKHR;
PFNGLGETOBJECTLABELKHRPROC       glGetObjectLabelKHR;
PFNGLOBJECTPTRLABELKHRPROC       glObjectPtrLabelKHR;
PFNGLGETOBJECTPTRLABELKHRPROC    glGetObjectPtrLabelKHR;
PFNGLGETPOINTERVKHRPROC          glGetPointervKHR;
#endif /* defined(GL_KHR_debug) */

#if defined(GL_KHR_robustness)
PFNGLGETGRAPHICSRESETSTATUSKHRPROC glGetGraphicsResetStatusKHR;
PFNGLREADNPIXELSKHRPROC            glReadnPixelsKHR;
PFNGLGETNUNIFORMFVKHRPROC          glGetnUniformfvKHR;
PFNGLGETNUNIFORMIVKHRPROC          glGetnUniformivKHR;
PFNGLGETNUNIFORMUIVKHRPROC         glGetnUniformuivKHR;
#endif /* defined(GL_KHR_robustness) */

#if defined(GL_KHR_parallel_shader_compile)
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glMaxShaderCompilerThreadsKHR;
#endif /* defined(GL_KHR_parallel_shader_compile) */

#if defined(GL_MESA_framebuffer_flip_y)
PFNGLFRAMEBUFFERPARAMETERIMESAPROC     glFramebufferParameteriMESA;
PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glGetFramebufferParameterivMESA;
#endif /* defined(GL_MESA_framebuffer_flip_y) */

#if defined(GL_NV_bindless_texture)
PFNGLGETTEXTUREHANDLENVPROC             glGetTextureHandleNV;
PFNGLGETTEXTURESAMPLERHANDLENVPROC      glGetTextureSamplerHandleNV;
PFNGLMAKETEXTUREHANDLERESIDENTNVPROC    glMakeTextureHandleResidentNV;
PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glMakeTextureHandleNonResidentNV;
PFNGLGETIMAGEHANDLENVPROC               glGetImageHandleNV;
PFNGLMAKEIMAGEHANDLERESIDENTNVPROC      glMakeImageHandleResidentNV;
PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC   glMakeImageHandleNonResidentNV;
PFNGLUNIFORMHANDLEUI64NVPROC            glUniformHandleui64NV;
PFNGLUNIFORMHANDLEUI64VNVPROC           glUniformHandleui64vNV;
PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC     glProgramUniformHandleui64NV;
PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC    glProgramUniformHandleui64vNV;
PFNGLISTEXTUREHANDLERESIDENTNVPROC      glIsTextureHandleResidentNV;
PFNGLISIMAGEHANDLERESIDENTNVPROC        glIsImageHandleResidentNV;
#endif /* defined(GL_NV_bindless_texture) */

#if defined(GL_NV_blend_equation_advanced)
PFNGLBLENDPARAMETERINVPROC glBlendParameteriNV;
PFNGLBLENDBARRIERNVPROC    glBlendBarrierNV;
#endif /* defined(GL_NV_blend_equation_advanced) */

#if defined(GL_NV_clip_space_w_scaling)
PFNGLVIEWPORTPOSITIONWSCALENVPROC glViewportPositionWScaleNV;
#endif /* defined(GL_NV_clip_space_w_scaling) */

#if defined(GL_NV_conditional_render)
PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
PFNGLENDCONDITIONALRENDERNVPROC   glEndConditionalRenderNV;
#endif /* defined(GL_NV_conditional_render) */

#if defined(GL_NV_conservative_raster)
PFNGLSUBPIXELPRECISIONBIASNVPROC glSubpixelPrecisionBiasNV;
#endif /* defined(GL_NV_conservative_raster) */

#if defined(GL_NV_conservative_raster_pre_snap_triangles)
PFNGLCONSERVATIVERASTERPARAMETERINVPROC glConservativeRasterParameteriNV;
#endif /* defined(GL_NV_conservative_raster_pre_snap_triangles) */

#if defined(GL_NV_copy_buffer)
PFNGLCOPYBUFFERSUBDATANVPROC glCopyBufferSubDataNV;
#endif /* defined(GL_NV_copy_buffer) */

#if defined(GL_NV_coverage_sample)
PFNGLCOVERAGEMASKNVPROC      glCoverageMaskNV;
PFNGLCOVERAGEOPERATIONNVPROC glCoverageOperationNV;
#endif /* defined(GL_NV_coverage_sample) */

#if defined(GL_NV_draw_buffers)
PFNGLDRAWBUFFERSNVPROC glDrawBuffersNV;
#endif /* defined(GL_NV_draw_buffers) */

#if defined(GL_NV_draw_instanced)
PFNGLDRAWARRAYSINSTANCEDNVPROC   glDrawArraysInstancedNV;
PFNGLDRAWELEMENTSINSTANCEDNVPROC glDrawElementsInstancedNV;
#endif /* defined(GL_NV_draw_instanced) */

#if defined(GL_NV_draw_vulkan_image)
PFNGLDRAWVKIMAGENVPROC       glDrawVkImageNV;
PFNGLGETVKPROCADDRNVPROC     glGetVkProcAddrNV;
PFNGLWAITVKSEMAPHORENVPROC   glWaitVkSemaphoreNV;
PFNGLSIGNALVKSEMAPHORENVPROC glSignalVkSemaphoreNV;
PFNGLSIGNALVKFENCENVPROC     glSignalVkFenceNV;
#endif /* defined(GL_NV_draw_vulkan_image) */

#if defined(GL_NV_fence)
PFNGLDELETEFENCESNVPROC glDeleteFencesNV;
PFNGLGENFENCESNVPROC    glGenFencesNV;
PFNGLISFENCENVPROC      glIsFenceNV;
PFNGLTESTFENCENVPROC    glTestFenceNV;
PFNGLGETFENCEIVNVPROC   glGetFenceivNV;
PFNGLFINISHFENCENVPROC  glFinishFenceNV;
PFNGLSETFENCENVPROC     glSetFenceNV;
#endif /* defined(GL_NV_fence) */

#if defined(GL_NV_fragment_coverage_to_color)
PFNGLFRAGMENTCOVERAGECOLORNVPROC glFragmentCoverageColorNV;
#endif /* defined(GL_NV_fragment_coverage_to_color) */

#if defined(GL_NV_framebuffer_blit)
PFNGLBLITFRAMEBUFFERNVPROC glBlitFramebufferNV;
#endif /* defined(GL_NV_framebuffer_blit) */

#if defined(GL_NV_framebuffer_mixed_samples)
PFNGLCOVERAGEMODULATIONTABLENVPROC    glCoverageModulationTableNV;
PFNGLGETCOVERAGEMODULATIONTABLENVPROC glGetCoverageModulationTableNV;
PFNGLCOVERAGEMODULATIONNVPROC         glCoverageModulationNV;
#endif /* defined(GL_NV_framebuffer_mixed_samples) */

#if defined(GL_NV_framebuffer_multisample)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC glRenderbufferStorageMultisampleNV;
#endif /* defined(GL_NV_framebuffer_multisample) */

#if defined(GL_NV_gpu_shader5)
PFNGLUNIFORM1I64NVPROC    glUniform1i64NV;
PFNGLUNIFORM2I64NVPROC    glUniform2i64NV;
PFNGLUNIFORM3I64NVPROC    glUniform3i64NV;
PFNGLUNIFORM4I64NVPROC    glUniform4i64NV;
PFNGLUNIFORM1I64VNVPROC   glUniform1i64vNV;
PFNGLUNIFORM2I64VNVPROC   glUniform2i64vNV;
PFNGLUNIFORM3I64VNVPROC   glUniform3i64vNV;
PFNGLUNIFORM4I64VNVPROC   glUniform4i64vNV;
PFNGLUNIFORM1UI64NVPROC   glUniform1ui64NV;
PFNGLUNIFORM2UI64NVPROC   glUniform2ui64NV;
PFNGLUNIFORM3UI64NVPROC   glUniform3ui64NV;
PFNGLUNIFORM4UI64NVPROC   glUniform4ui64NV;
PFNGLUNIFORM1UI64VNVPROC  glUniform1ui64vNV;
PFNGLUNIFORM2UI64VNVPROC  glUniform2ui64vNV;
PFNGLUNIFORM3UI64VNVPROC  glUniform3ui64vNV;
PFNGLUNIFORM4UI64VNVPROC  glUniform4ui64vNV;
PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;

PFNGLPROGRAMUNIFORM1I64NVPROC   glProgramUniform1i64NV;
PFNGLPROGRAMUNIFORM2I64NVPROC   glProgramUniform2i64NV;
PFNGLPROGRAMUNIFORM3I64NVPROC   glProgramUniform3i64NV;
PFNGLPROGRAMUNIFORM4I64NVPROC   glProgramUniform4i64NV;
PFNGLPROGRAMUNIFORM1I64VNVPROC  glProgramUniform1i64vNV;
PFNGLPROGRAMUNIFORM2I64VNVPROC  glProgramUniform2i64vNV;
PFNGLPROGRAMUNIFORM3I64VNVPROC  glProgramUniform3i64vNV;
PFNGLPROGRAMUNIFORM4I64VNVPROC  glProgramUniform4i64vNV;
PFNGLPROGRAMUNIFORM1UI64NVPROC  glProgramUniform1ui64NV;
PFNGLPROGRAMUNIFORM2UI64NVPROC  glProgramUniform2ui64NV;
PFNGLPROGRAMUNIFORM3UI64NVPROC  glProgramUniform3ui64NV;
PFNGLPROGRAMUNIFORM4UI64NVPROC  glProgramUniform4ui64NV;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;
#endif /* defined(GL_NV_gpu_shader5) */

#if defined(GL_NV_instanced_arrays)
PFNGLVERTEXATTRIBDIVISORNVPROC glVertexAttribDivisorNV;
#endif /* defined(GL_NV_instanced_arrays) */

#if defined(GL_NV_internalformat_sample_query)
PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glGetInternalformatSampleivNV;
#endif /* defined(GL_NV_internalformat_sample_query) */

#if defined(GL_NV_memory_attachment)
PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glGetMemoryObjectDetachedResourcesuivNV;
PFNGLRESETMEMORYOBJECTPARAMETERNVPROC          glResetMemoryObjectParameterNV;
PFNGLTEXATTACHMEMORYNVPROC                     glTexAttachMemoryNV;
PFNGLBUFFERATTACHMEMORYNVPROC                  glBufferAttachMemoryNV;

PFNGLTEXTUREATTACHMEMORYNVPROC     glTextureAttachMemoryNV;
PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glNamedBufferAttachMemoryNV;
#endif /* defined(GL_NV_memory_attachment) */

#if defined(GL_NV_memory_object_sparse)
PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glBufferPageCommitmentMemNV;
PFNGLTEXPAGECOMMITMENTMEMNVPROC    glTexPageCommitmentMemNV;

PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glNamedBufferPageCommitmentMemNV;
PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC     glTexturePageCommitmentMemNV;
#endif /* defined(GL_NV_memory_object_sparse) */

#if defined(GL_NV_mesh_shader)
PFNGLDRAWMESHTASKSNVPROC                   glDrawMeshTasksNV;
PFNGLDRAWMESHTASKSINDIRECTNVPROC           glDrawMeshTasksIndirectNV;
PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC      glMultiDrawMeshTasksIndirectNV;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glMultiDrawMeshTasksIndirectCountNV;
#endif /* defined(GL_NV_mesh_shader) */

#if defined(GL_NV_non_square_matrices)
PFNGLUNIFORMMATRIX2X3FVNVPROC glUniformMatrix2x3fvNV;
PFNGLUNIFORMMATRIX3X2FVNVPROC glUniformMatrix3x2fvNV;
PFNGLUNIFORMMATRIX2X4FVNVPROC glUniformMatrix2x4fvNV;
PFNGLUNIFORMMATRIX4X2FVNVPROC glUniformMatrix4x2fvNV;
PFNGLUNIFORMMATRIX3X4FVNVPROC glUniformMatrix3x4fvNV;
PFNGLUNIFORMMATRIX4X3FVNVPROC glUniformMatrix4x3fvNV;
#endif /* defined(GL_NV_non_square_matrices) */

#if defined(GL_NV_path_rendering)
PFNGLGENPATHSNVPROC                   glGenPathsNV;
PFNGLDELETEPATHSNVPROC                glDeletePathsNV;
PFNGLISPATHNVPROC                     glIsPathNV;
PFNGLPATHCOMMANDSNVPROC               glPathCommandsNV;
PFNGLPATHCOORDSNVPROC                 glPathCoordsNV;
PFNGLPATHSUBCOMMANDSNVPROC            glPathSubCommandsNV;
PFNGLPATHSUBCOORDSNVPROC              glPathSubCoordsNV;
PFNGLPATHSTRINGNVPROC                 glPathStringNV;
PFNGLPATHGLYPHSNVPROC                 glPathGlyphsNV;
PFNGLPATHGLYPHRANGENVPROC             glPathGlyphRangeNV;
PFNGLWEIGHTPATHSNVPROC                glWeightPathsNV;
PFNGLCOPYPATHNVPROC                   glCopyPathNV;
PFNGLINTERPOLATEPATHSNVPROC           glInterpolatePathsNV;
PFNGLTRANSFORMPATHNVPROC              glTransformPathNV;
PFNGLPATHPARAMETERIVNVPROC            glPathParameterivNV;
PFNGLPATHPARAMETERINVPROC             glPathParameteriNV;
PFNGLPATHPARAMETERFVNVPROC            glPathParameterfvNV;
PFNGLPATHPARAMETERFNVPROC             glPathParameterfNV;
PFNGLPATHDASHARRAYNVPROC              glPathDashArrayNV;
PFNGLPATHSTENCILFUNCNVPROC            glPathStencilFuncNV;
PFNGLPATHSTENCILDEPTHOFFSETNVPROC     glPathStencilDepthOffsetNV;
PFNGLSTENCILFILLPATHNVPROC            glStencilFillPathNV;
PFNGLSTENCILSTROKEPATHNVPROC          glStencilStrokePathNV;
PFNGLSTENCILFILLPATHINSTANCEDNVPROC   glStencilFillPathInstancedNV;
PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glStencilStrokePathInstancedNV;
PFNGLPATHCOVERDEPTHFUNCNVPROC         glPathCoverDepthFuncNV;
PFNGLCOVERFILLPATHNVPROC              glCoverFillPathNV;
PFNGLCOVERSTROKEPATHNVPROC            glCoverStrokePathNV;
PFNGLCOVERFILLPATHINSTANCEDNVPROC     glCoverFillPathInstancedNV;
PFNGLCOVERSTROKEPATHINSTANCEDNVPROC   glCoverStrokePathInstancedNV;
PFNGLGETPATHPARAMETERIVNVPROC         glGetPathParameterivNV;
PFNGLGETPATHPARAMETERFVNVPROC         glGetPathParameterfvNV;
PFNGLGETPATHCOMMANDSNVPROC            glGetPathCommandsNV;
PFNGLGETPATHCOORDSNVPROC              glGetPathCoordsNV;
PFNGLGETPATHDASHARRAYNVPROC           glGetPathDashArrayNV;
PFNGLGETPATHMETRICSNVPROC             glGetPathMetricsNV;
PFNGLGETPATHMETRICRANGENVPROC         glGetPathMetricRangeNV;
PFNGLGETPATHSPACINGNVPROC             glGetPathSpacingNV;
PFNGLISPOINTINFILLPATHNVPROC          glIsPointInFillPathNV;
PFNGLISPOINTINSTROKEPATHNVPROC        glIsPointInStrokePathNV;
PFNGLGETPATHLENGTHNVPROC              glGetPathLengthNV;
PFNGLPOINTALONGPATHNVPROC             glPointAlongPathNV;

PFNGLMATRIXLOAD3X2FNVPROC                      glMatrixLoad3x2fNV;
PFNGLMATRIXLOAD3X3FNVPROC                      glMatrixLoad3x3fNV;
PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC             glMatrixLoadTranspose3x3fNV;
PFNGLMATRIXMULT3X2FNVPROC                      glMatrixMult3x2fNV;
PFNGLMATRIXMULT3X3FNVPROC                      glMatrixMult3x3fNV;
PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC             glMatrixMultTranspose3x3fNV;
PFNGLSTENCILTHENCOVERFILLPATHNVPROC            glStencilThenCoverFillPathNV;
PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC          glStencilThenCoverStrokePathNV;
PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC   glStencilThenCoverFillPathInstancedNV;
PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glStencilThenCoverStrokePathInstancedNV;
PFNGLPATHGLYPHINDEXRANGENVPROC                 glPathGlyphIndexRangeNV;

PFNGLPATHGLYPHINDEXARRAYNVPROC         glPathGlyphIndexArrayNV;
PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC   glPathMemoryGlyphIndexArrayNV;
PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glProgramPathFragmentInputGenNV;
PFNGLGETPROGRAMRESOURCEFVNVPROC        glGetProgramResourcefvNV;

PFNGLMATRIXFRUSTUMEXTPROC        glMatrixFrustumEXT;
PFNGLMATRIXLOADIDENTITYEXTPROC   glMatrixLoadIdentityEXT;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;
PFNGLMATRIXLOADFEXTPROC          glMatrixLoadfEXT;
PFNGLMATRIXLOADDEXTPROC          glMatrixLoaddEXT;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;
PFNGLMATRIXMULTFEXTPROC          glMatrixMultfEXT;
PFNGLMATRIXMULTDEXTPROC          glMatrixMultdEXT;
PFNGLMATRIXORTHOEXTPROC          glMatrixOrthoEXT;
PFNGLMATRIXPOPEXTPROC            glMatrixPopEXT;
PFNGLMATRIXPUSHEXTPROC           glMatrixPushEXT;
PFNGLMATRIXROTATEFEXTPROC        glMatrixRotatefEXT;
PFNGLMATRIXROTATEDEXTPROC        glMatrixRotatedEXT;
PFNGLMATRIXSCALEFEXTPROC         glMatrixScalefEXT;
PFNGLMATRIXSCALEDEXTPROC         glMatrixScaledEXT;
PFNGLMATRIXTRANSLATEFEXTPROC     glMatrixTranslatefEXT;
PFNGLMATRIXTRANSLATEDEXTPROC     glMatrixTranslatedEXT;
#endif /* defined(GL_NV_path_rendering) */

#if defined(GL_NV_polygon_mode)
PFNGLPOLYGONMODENVPROC glPolygonModeNV;
#endif /* defined(GL_NV_polygon_mode) */

#if defined(GL_NV_read_buffer)
PFNGLREADBUFFERNVPROC glReadBufferNV;
#endif /* defined(GL_NV_read_buffer) */

#if defined(GL_NV_sample_locations)
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC      glFramebufferSampleLocationsfvNV;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glNamedFramebufferSampleLocationsfvNV;
PFNGLRESOLVEDEPTHVALUESNVPROC                glResolveDepthValuesNV;
#endif /* defined(GL_NV_sample_locations) */

#if defined(GL_NV_scissor_exclusive)
PFNGLSCISSOREXCLUSIVENVPROC       glScissorExclusiveNV;
PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glScissorExclusiveArrayvNV;
#endif /* defined(GL_NV_scissor_exclusive) */

#if defined(GL_NV_shading_rate_image)
PFNGLBINDSHADINGRATEIMAGENVPROC           glBindShadingRateImageNV;
PFNGLGETSHADINGRATEIMAGEPALETTENVPROC     glGetShadingRateImagePaletteNV;
PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glGetShadingRateSampleLocationivNV;
PFNGLSHADINGRATEIMAGEBARRIERNVPROC        glShadingRateImageBarrierNV;
PFNGLSHADINGRATEIMAGEPALETTENVPROC        glShadingRateImagePaletteNV;
PFNGLSHADINGRATESAMPLEORDERNVPROC         glShadingRateSampleOrderNV;
PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC   glShadingRateSampleOrderCustomNV;
#endif /* defined(GL_NV_shading_rate_image) */

#if defined(GL_NV_viewport_array)
PFNGLVIEWPORTARRAYVNVPROC     glViewportArrayvNV;
PFNGLVIEWPORTINDEXEDFNVPROC   glViewportIndexedfNV;
PFNGLVIEWPORTINDEXEDFVNVPROC  glViewportIndexedfvNV;
PFNGLSCISSORARRAYVNVPROC      glScissorArrayvNV;
PFNGLSCISSORINDEXEDNVPROC     glScissorIndexedNV;
PFNGLSCISSORINDEXEDVNVPROC    glScissorIndexedvNV;
PFNGLDEPTHRANGEARRAYFVNVPROC  glDepthRangeArrayfvNV;
PFNGLDEPTHRANGEINDEXEDFNVPROC glDepthRangeIndexedfNV;
PFNGLGETFLOATI_VNVPROC        glGetFloati_vNV;
PFNGLENABLEINVPROC            glEnableiNV;
PFNGLDISABLEINVPROC           glDisableiNV;
PFNGLISENABLEDINVPROC         glIsEnablediNV;
#endif /* defined(GL_NV_viewport_array) */

#if defined(GL_NV_viewport_swizzle)
PFNGLVIEWPORTSWIZZLENVPROC glViewportSwizzleNV;
#endif /* defined(GL_NV_viewport_swizzle) */

#if defined(GL_OES_EGL_image)
PFNGLEGLIMAGETARGETTEXTURE2DOESPROC           glEGLImageTargetTexture2DOES;
PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC glEGLImageTargetRenderbufferStorageOES;
#endif /* defined(GL_OES_EGL_image) */

#if defined(GL_OES_copy_image)
PFNGLCOPYIMAGESUBDATAOESPROC glCopyImageSubDataOES;
#endif /* defined(GL_OES_copy_image) */

#if defined(GL_OES_draw_buffers_indexed)
PFNGLENABLEIOESPROC                glEnableiOES;
PFNGLDISABLEIOESPROC               glDisableiOES;
PFNGLBLENDEQUATIONIOESPROC         glBlendEquationiOES;
PFNGLBLENDEQUATIONSEPARATEIOESPROC glBlendEquationSeparateiOES;
PFNGLBLENDFUNCIOESPROC             glBlendFunciOES;
PFNGLBLENDFUNCSEPARATEIOESPROC     glBlendFuncSeparateiOES;
PFNGLCOLORMASKIOESPROC             glColorMaskiOES;
PFNGLISENABLEDIOESPROC             glIsEnablediOES;
#endif /* defined(GL_OES_draw_buffers_indexed) */

#if defined(GL_OES_draw_elements_base_vertex)
PFNGLDRAWELEMENTSBASEVERTEXOESPROC          glDrawElementsBaseVertexOES;
PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC     glDrawRangeElementsBaseVertexOES;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC glDrawElementsInstancedBaseVertexOES;
#endif /* defined(GL_OES_draw_elements_base_vertex) */

#if defined(GL_OES_geometry_shader)
PFNGLFRAMEBUFFERTEXTUREOESPROC glFramebufferTextureOES;
#endif /* defined(GL_OES_geometry_shader) */

#if defined(GL_OES_get_program_binary)
PFNGLGETPROGRAMBINARYOESPROC glGetProgramBinaryOES;
PFNGLPROGRAMBINARYOESPROC    glProgramBinaryOES;
#endif /* defined(GL_OES_get_program_binary) */

#if defined(GL_OES_mapbuffer)
PFNGLMAPBUFFEROESPROC         glMapBufferOES;
PFNGLUNMAPBUFFEROESPROC       glUnmapBufferOES;
PFNGLGETBUFFERPOINTERVOESPROC glGetBufferPointervOES;
#endif /* defined(GL_OES_mapbuffer) */

#if defined(GL_OES_primitive_bounding_box)
PFNGLPRIMITIVEBOUNDINGBOXOESPROC glPrimitiveBoundingBoxOES;
#endif /* defined(GL_OES_primitive_bounding_box) */

#if defined(GL_OES_sample_shading)
PFNGLMINSAMPLESHADINGOESPROC glMinSampleShadingOES;
#endif /* defined(GL_OES_sample_shading) */

#if defined(GL_OES_tessellation_shader)
PFNGLPATCHPARAMETERIOESPROC glPatchParameteriOES;
#endif /* defined(GL_OES_tessellation_shader) */

#if defined(GL_OES_texture_3D)
PFNGLTEXIMAGE3DOESPROC              glTexImage3DOES;
PFNGLTEXSUBIMAGE3DOESPROC           glTexSubImage3DOES;
PFNGLCOPYTEXSUBIMAGE3DOESPROC       glCopyTexSubImage3DOES;
PFNGLCOMPRESSEDTEXIMAGE3DOESPROC    glCompressedTexImage3DOES;
PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC glCompressedTexSubImage3DOES;
PFNGLFRAMEBUFFERTEXTURE3DOESPROC    glFramebufferTexture3DOES;
#endif /* defined(GL_OES_texture_3D) */

#if defined(GL_OES_texture_border_clamp)
PFNGLTEXPARAMETERIIVOESPROC         glTexParameterIivOES;
PFNGLTEXPARAMETERIUIVOESPROC        glTexParameterIuivOES;
PFNGLGETTEXPARAMETERIIVOESPROC      glGetTexParameterIivOES;
PFNGLGETTEXPARAMETERIUIVOESPROC     glGetTexParameterIuivOES;
PFNGLSAMPLERPARAMETERIIVOESPROC     glSamplerParameterIivOES;
PFNGLSAMPLERPARAMETERIUIVOESPROC    glSamplerParameterIuivOES;
PFNGLGETSAMPLERPARAMETERIIVOESPROC  glGetSamplerParameterIivOES;
PFNGLGETSAMPLERPARAMETERIUIVOESPROC glGetSamplerParameterIuivOES;
#endif /* defined(GL_OES_texture_border_clamp) */

#if defined(GL_OES_texture_buffer)
PFNGLTEXBUFFEROESPROC      glTexBufferOES;
PFNGLTEXBUFFERRANGEOESPROC glTexBufferRangeOES;
#endif /* defined(GL_OES_texture_buffer) */

#if defined(GL_OES_texture_storage_multisample_2d_array)
PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC glTexStorage3DMultisampleOES;
#endif /* defined(GL_OES_texture_storage_multisample_2d_array) */

#if defined(GL_OES_texture_view)
PFNGLTEXTUREVIEWOESPROC glTextureViewOES;
#endif /* defined(GL_OES_texture_view) */

#if defined(GL_OES_vertex_array_object)
PFNGLBINDVERTEXARRAYOESPROC    glBindVertexArrayOES;
PFNGLDELETEVERTEXARRAYSOESPROC glDeleteVertexArraysOES;
PFNGLGENVERTEXARRAYSOESPROC    glGenVertexArraysOES;
PFNGLISVERTEXARRAYOESPROC      glIsVertexArrayOES;
#endif /* defined(GL_OES_vertex_array_object) */

#if defined(GL_OES_viewport_array)
PFNGLVIEWPORTARRAYVOESPROC     glViewportArrayvOES;
PFNGLVIEWPORTINDEXEDFOESPROC   glViewportIndexedfOES;
PFNGLVIEWPORTINDEXEDFVOESPROC  glViewportIndexedfvOES;
PFNGLSCISSORARRAYVOESPROC      glScissorArrayvOES;
PFNGLSCISSORINDEXEDOESPROC     glScissorIndexedOES;
PFNGLSCISSORINDEXEDVOESPROC    glScissorIndexedvOES;
PFNGLDEPTHRANGEARRAYFVOESPROC  glDepthRangeArrayfvOES;
PFNGLDEPTHRANGEINDEXEDFOESPROC glDepthRangeIndexedfOES;
PFNGLGETFLOATI_VOESPROC        glGetFloati_vOES;
#endif /* defined(GL_OES_viewport_array) */

#if defined(GL_OVR_multiview)
PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glFramebufferTextureMultiviewOVR;
#endif /* defined(GL_OVR_multiview) */

#if defined(GL_OVR_multiview_multisampled_render_to_texture)
PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC glFramebufferTextureMultisampleMultiviewOVR;
#endif /* defined(GL_OVR_multiview_multisampled_render_to_texture) */

#if defined(GL_QCOM_alpha_test)
PFNGLALPHAFUNCQCOMPROC glAlphaFuncQCOM;
#endif /* defined(GL_QCOM_alpha_test) */

#if defined(GL_QCOM_driver_control)
PFNGLGETDRIVERCONTROLSQCOMPROC      glGetDriverControlsQCOM;
PFNGLGETDRIVERCONTROLSTRINGQCOMPROC glGetDriverControlStringQCOM;
PFNGLENABLEDRIVERCONTROLQCOMPROC    glEnableDriverControlQCOM;
PFNGLDISABLEDRIVERCONTROLQCOMPROC   glDisableDriverControlQCOM;
#endif /* defined(GL_QCOM_driver_control) */

#if defined(GL_QCOM_extended_get)
PFNGLEXTGETTEXTURESQCOMPROC             glExtGetTexturesQCOM;
PFNGLEXTGETBUFFERSQCOMPROC              glExtGetBuffersQCOM;
PFNGLEXTGETRENDERBUFFERSQCOMPROC        glExtGetRenderbuffersQCOM;
PFNGLEXTGETFRAMEBUFFERSQCOMPROC         glExtGetFramebuffersQCOM;
PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC  glExtGetTexLevelParameterivQCOM;
PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC glExtTexObjectStateOverrideiQCOM;
PFNGLEXTGETTEXSUBIMAGEQCOMPROC          glExtGetTexSubImageQCOM;
PFNGLEXTGETBUFFERPOINTERVQCOMPROC       glExtGetBufferPointervQCOM;
#endif /* defined(GL_QCOM_extended_get) */

#if defined(GL_QCOM_extended_get2)
PFNGLEXTGETSHADERSQCOMPROC             glExtGetShadersQCOM;
PFNGLEXTGETPROGRAMSQCOMPROC            glExtGetProgramsQCOM;
PFNGLEXTISPROGRAMBINARYQCOMPROC        glExtIsProgramBinaryQCOM;
PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC glExtGetProgramBinarySourceQCOM;
#endif /* defined(GL_QCOM_extended_get2) */

#if defined(GL_QCOM_framebuffer_foveated)
PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC     glFramebufferFoveationConfigQCOM;
PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC glFramebufferFoveationParametersQCOM;
#endif /* defined(GL_QCOM_framebuffer_foveated) */

#if defined(GL_QCOM_motion_estimation)
PFNGLTEXESTIMATEMOTIONQCOMPROC        glTexEstimateMotionQCOM;
PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC glTexEstimateMotionRegionsQCOM;
#endif /* defined(GL_QCOM_motion_estimation) */

#if defined(GL_QCOM_frame_extrapolation)
PFNGLEXTRAPOLATETEX2DQCOMPROC glExtrapolateTex2DQCOM;
#endif /* defined(GL_QCOM_frame_extrapolation) */

#if defined(GL_QCOM_texture_foveated)
PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC glTextureFoveationParametersQCOM;
#endif /* defined(GL_QCOM_texture_foveated) */

#if defined(GL_QCOM_shader_framebuffer_fetch_noncoherent)
PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC glFramebufferFetchBarrierQCOM;
#endif /* defined(GL_QCOM_shader_framebuffer_fetch_noncoherent) */

#if defined(GL_QCOM_shading_rate)
PFNGLSHADINGRATEQCOMPROC glShadingRateQCOM;
#endif /* defined(GL_QCOM_shading_rate) */

#if defined(GL_QCOM_tiled_rendering)
PFNGLSTARTTILINGQCOMPROC glStartTilingQCOM;
PFNGLENDTILINGQCOMPROC   glEndTilingQCOM;
#endif /* defined(GL_QCOM_tiled_rendering) */

/* GLES2W_GENERATE_GLES_DEFINITION */

/**
 * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
 * The above section is auto-generated from GLES spec by running:
 * node tools/gles-wrangler-generator/generate.js
 * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
 */

void gles2wLoadProcs(PFNGLES2WLOADPROC gles2wLoad) {
    /**
     * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
     * The following section is auto-generated from GLES spec by running:
     * node tools/gles-wrangler-generator/generate.js
     * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
     */

    /* GLES2W_GENERATE_GLES_LOAD */
    /* GL_ES_VERSION_2_0 */
    glActiveTexture                       = reinterpret_cast<PFNGLACTIVETEXTUREPROC>(gles2wLoad("glActiveTexture"));
    glAttachShader                        = reinterpret_cast<PFNGLATTACHSHADERPROC>(gles2wLoad("glAttachShader"));
    glBindAttribLocation                  = reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(gles2wLoad("glBindAttribLocation"));
    glBindBuffer                          = reinterpret_cast<PFNGLBINDBUFFERPROC>(gles2wLoad("glBindBuffer"));
    glBindFramebuffer                     = reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(gles2wLoad("glBindFramebuffer"));
    glBindRenderbuffer                    = reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(gles2wLoad("glBindRenderbuffer"));
    glBindTexture                         = reinterpret_cast<PFNGLBINDTEXTUREPROC>(gles2wLoad("glBindTexture"));
    glBlendColor                          = reinterpret_cast<PFNGLBLENDCOLORPROC>(gles2wLoad("glBlendColor"));
    glBlendEquation                       = reinterpret_cast<PFNGLBLENDEQUATIONPROC>(gles2wLoad("glBlendEquation"));
    glBlendEquationSeparate               = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(gles2wLoad("glBlendEquationSeparate"));
    glBlendFunc                           = reinterpret_cast<PFNGLBLENDFUNCPROC>(gles2wLoad("glBlendFunc"));
    glBlendFuncSeparate                   = reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(gles2wLoad("glBlendFuncSeparate"));
    glBufferData                          = reinterpret_cast<PFNGLBUFFERDATAPROC>(gles2wLoad("glBufferData"));
    glBufferSubData                       = reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(gles2wLoad("glBufferSubData"));
    glCheckFramebufferStatus              = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(gles2wLoad("glCheckFramebufferStatus"));
    glClear                               = reinterpret_cast<PFNGLCLEARPROC>(gles2wLoad("glClear"));
    glClearColor                          = reinterpret_cast<PFNGLCLEARCOLORPROC>(gles2wLoad("glClearColor"));
    glClearDepthf                         = reinterpret_cast<PFNGLCLEARDEPTHFPROC>(gles2wLoad("glClearDepthf"));
    glClearStencil                        = reinterpret_cast<PFNGLCLEARSTENCILPROC>(gles2wLoad("glClearStencil"));
    glColorMask                           = reinterpret_cast<PFNGLCOLORMASKPROC>(gles2wLoad("glColorMask"));
    glCompileShader                       = reinterpret_cast<PFNGLCOMPILESHADERPROC>(gles2wLoad("glCompileShader"));
    glCompressedTexImage2D                = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC>(gles2wLoad("glCompressedTexImage2D"));
    glCompressedTexSubImage2D             = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>(gles2wLoad("glCompressedTexSubImage2D"));
    glCopyTexImage2D                      = reinterpret_cast<PFNGLCOPYTEXIMAGE2DPROC>(gles2wLoad("glCopyTexImage2D"));
    glCopyTexSubImage2D                   = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DPROC>(gles2wLoad("glCopyTexSubImage2D"));
    glCreateProgram                       = reinterpret_cast<PFNGLCREATEPROGRAMPROC>(gles2wLoad("glCreateProgram"));
    glCreateShader                        = reinterpret_cast<PFNGLCREATESHADERPROC>(gles2wLoad("glCreateShader"));
    glCullFace                            = reinterpret_cast<PFNGLCULLFACEPROC>(gles2wLoad("glCullFace"));
    glDeleteBuffers                       = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(gles2wLoad("glDeleteBuffers"));
    glDeleteFramebuffers                  = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(gles2wLoad("glDeleteFramebuffers"));
    glDeleteProgram                       = reinterpret_cast<PFNGLDELETEPROGRAMPROC>(gles2wLoad("glDeleteProgram"));
    glDeleteRenderbuffers                 = reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(gles2wLoad("glDeleteRenderbuffers"));
    glDeleteShader                        = reinterpret_cast<PFNGLDELETESHADERPROC>(gles2wLoad("glDeleteShader"));
    glDeleteTextures                      = reinterpret_cast<PFNGLDELETETEXTURESPROC>(gles2wLoad("glDeleteTextures"));
    glDepthFunc                           = reinterpret_cast<PFNGLDEPTHFUNCPROC>(gles2wLoad("glDepthFunc"));
    glDepthMask                           = reinterpret_cast<PFNGLDEPTHMASKPROC>(gles2wLoad("glDepthMask"));
    glDepthRangef                         = reinterpret_cast<PFNGLDEPTHRANGEFPROC>(gles2wLoad("glDepthRangef"));
    glDetachShader                        = reinterpret_cast<PFNGLDETACHSHADERPROC>(gles2wLoad("glDetachShader"));
    glDisable                             = reinterpret_cast<PFNGLDISABLEPROC>(gles2wLoad("glDisable"));
    glDisableVertexAttribArray            = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(gles2wLoad("glDisableVertexAttribArray"));
    glDrawArrays                          = reinterpret_cast<PFNGLDRAWARRAYSPROC>(gles2wLoad("glDrawArrays"));
    glDrawElements                        = reinterpret_cast<PFNGLDRAWELEMENTSPROC>(gles2wLoad("glDrawElements"));
    glEnable                              = reinterpret_cast<PFNGLENABLEPROC>(gles2wLoad("glEnable"));
    glEnableVertexAttribArray             = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(gles2wLoad("glEnableVertexAttribArray"));
    glFinish                              = reinterpret_cast<PFNGLFINISHPROC>(gles2wLoad("glFinish"));
    glFlush                               = reinterpret_cast<PFNGLFLUSHPROC>(gles2wLoad("glFlush"));
    glFramebufferRenderbuffer             = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(gles2wLoad("glFramebufferRenderbuffer"));
    glFramebufferTexture2D                = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(gles2wLoad("glFramebufferTexture2D"));
    glFrontFace                           = reinterpret_cast<PFNGLFRONTFACEPROC>(gles2wLoad("glFrontFace"));
    glGenBuffers                          = reinterpret_cast<PFNGLGENBUFFERSPROC>(gles2wLoad("glGenBuffers"));
    glGenerateMipmap                      = reinterpret_cast<PFNGLGENERATEMIPMAPPROC>(gles2wLoad("glGenerateMipmap"));
    glGenFramebuffers                     = reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(gles2wLoad("glGenFramebuffers"));
    glGenRenderbuffers                    = reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(gles2wLoad("glGenRenderbuffers"));
    glGenTextures                         = reinterpret_cast<PFNGLGENTEXTURESPROC>(gles2wLoad("glGenTextures"));
    glGetActiveAttrib                     = reinterpret_cast<PFNGLGETACTIVEATTRIBPROC>(gles2wLoad("glGetActiveAttrib"));
    glGetActiveUniform                    = reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC>(gles2wLoad("glGetActiveUniform"));
    glGetAttachedShaders                  = reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(gles2wLoad("glGetAttachedShaders"));
    glGetAttribLocation                   = reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(gles2wLoad("glGetAttribLocation"));
    glGetBooleanv                         = reinterpret_cast<PFNGLGETBOOLEANVPROC>(gles2wLoad("glGetBooleanv"));
    glGetBufferParameteriv                = reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(gles2wLoad("glGetBufferParameteriv"));
    glGetError                            = reinterpret_cast<PFNGLGETERRORPROC>(gles2wLoad("glGetError"));
    glGetFloatv                           = reinterpret_cast<PFNGLGETFLOATVPROC>(gles2wLoad("glGetFloatv"));
    glGetFramebufferAttachmentParameteriv = reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(gles2wLoad("glGetFramebufferAttachmentParameteriv"));
    glGetIntegerv                         = reinterpret_cast<PFNGLGETINTEGERVPROC>(gles2wLoad("glGetIntegerv"));
    glGetProgramiv                        = reinterpret_cast<PFNGLGETPROGRAMIVPROC>(gles2wLoad("glGetProgramiv"));
    glGetProgramInfoLog                   = reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(gles2wLoad("glGetProgramInfoLog"));
    glGetRenderbufferParameteriv          = reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC>(gles2wLoad("glGetRenderbufferParameteriv"));
    glGetShaderiv                         = reinterpret_cast<PFNGLGETSHADERIVPROC>(gles2wLoad("glGetShaderiv"));
    glGetShaderInfoLog                    = reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(gles2wLoad("glGetShaderInfoLog"));
    glGetShaderPrecisionFormat            = reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC>(gles2wLoad("glGetShaderPrecisionFormat"));
    glGetShaderSource                     = reinterpret_cast<PFNGLGETSHADERSOURCEPROC>(gles2wLoad("glGetShaderSource"));
    glGetString                           = reinterpret_cast<PFNGLGETSTRINGPROC>(gles2wLoad("glGetString"));
    glGetTexParameterfv                   = reinterpret_cast<PFNGLGETTEXPARAMETERFVPROC>(gles2wLoad("glGetTexParameterfv"));
    glGetTexParameteriv                   = reinterpret_cast<PFNGLGETTEXPARAMETERIVPROC>(gles2wLoad("glGetTexParameteriv"));
    glGetUniformfv                        = reinterpret_cast<PFNGLGETUNIFORMFVPROC>(gles2wLoad("glGetUniformfv"));
    glGetUniformiv                        = reinterpret_cast<PFNGLGETUNIFORMIVPROC>(gles2wLoad("glGetUniformiv"));
    glGetUniformLocation                  = reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(gles2wLoad("glGetUniformLocation"));
    glGetVertexAttribfv                   = reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC>(gles2wLoad("glGetVertexAttribfv"));
    glGetVertexAttribiv                   = reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC>(gles2wLoad("glGetVertexAttribiv"));
    glGetVertexAttribPointerv             = reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC>(gles2wLoad("glGetVertexAttribPointerv"));
    glHint                                = reinterpret_cast<PFNGLHINTPROC>(gles2wLoad("glHint"));
    glIsBuffer                            = reinterpret_cast<PFNGLISBUFFERPROC>(gles2wLoad("glIsBuffer"));
    glIsEnabled                           = reinterpret_cast<PFNGLISENABLEDPROC>(gles2wLoad("glIsEnabled"));
    glIsFramebuffer                       = reinterpret_cast<PFNGLISFRAMEBUFFERPROC>(gles2wLoad("glIsFramebuffer"));
    glIsProgram                           = reinterpret_cast<PFNGLISPROGRAMPROC>(gles2wLoad("glIsProgram"));
    glIsRenderbuffer                      = reinterpret_cast<PFNGLISRENDERBUFFERPROC>(gles2wLoad("glIsRenderbuffer"));
    glIsShader                            = reinterpret_cast<PFNGLISSHADERPROC>(gles2wLoad("glIsShader"));
    glIsTexture                           = reinterpret_cast<PFNGLISTEXTUREPROC>(gles2wLoad("glIsTexture"));
    glLineWidth                           = reinterpret_cast<PFNGLLINEWIDTHPROC>(gles2wLoad("glLineWidth"));
    glLinkProgram                         = reinterpret_cast<PFNGLLINKPROGRAMPROC>(gles2wLoad("glLinkProgram"));
    glPixelStorei                         = reinterpret_cast<PFNGLPIXELSTOREIPROC>(gles2wLoad("glPixelStorei"));
    glPolygonOffset                       = reinterpret_cast<PFNGLPOLYGONOFFSETPROC>(gles2wLoad("glPolygonOffset"));
    glReadPixels                          = reinterpret_cast<PFNGLREADPIXELSPROC>(gles2wLoad("glReadPixels"));
    glReleaseShaderCompiler               = reinterpret_cast<PFNGLRELEASESHADERCOMPILERPROC>(gles2wLoad("glReleaseShaderCompiler"));
    glRenderbufferStorage                 = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(gles2wLoad("glRenderbufferStorage"));
    glSampleCoverage                      = reinterpret_cast<PFNGLSAMPLECOVERAGEPROC>(gles2wLoad("glSampleCoverage"));
    glScissor                             = reinterpret_cast<PFNGLSCISSORPROC>(gles2wLoad("glScissor"));
    glShaderBinary                        = reinterpret_cast<PFNGLSHADERBINARYPROC>(gles2wLoad("glShaderBinary"));
    glShaderSource                        = reinterpret_cast<PFNGLSHADERSOURCEPROC>(gles2wLoad("glShaderSource"));
    glStencilFunc                         = reinterpret_cast<PFNGLSTENCILFUNCPROC>(gles2wLoad("glStencilFunc"));
    glStencilFuncSeparate                 = reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC>(gles2wLoad("glStencilFuncSeparate"));
    glStencilMask                         = reinterpret_cast<PFNGLSTENCILMASKPROC>(gles2wLoad("glStencilMask"));
    glStencilMaskSeparate                 = reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC>(gles2wLoad("glStencilMaskSeparate"));
    glStencilOp                           = reinterpret_cast<PFNGLSTENCILOPPROC>(gles2wLoad("glStencilOp"));
    glStencilOpSeparate                   = reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC>(gles2wLoad("glStencilOpSeparate"));
    glTexImage2D                          = reinterpret_cast<PFNGLTEXIMAGE2DPROC>(gles2wLoad("glTexImage2D"));
    glTexParameterf                       = reinterpret_cast<PFNGLTEXPARAMETERFPROC>(gles2wLoad("glTexParameterf"));
    glTexParameterfv                      = reinterpret_cast<PFNGLTEXPARAMETERFVPROC>(gles2wLoad("glTexParameterfv"));
    glTexParameteri                       = reinterpret_cast<PFNGLTEXPARAMETERIPROC>(gles2wLoad("glTexParameteri"));
    glTexParameteriv                      = reinterpret_cast<PFNGLTEXPARAMETERIVPROC>(gles2wLoad("glTexParameteriv"));
    glTexSubImage2D                       = reinterpret_cast<PFNGLTEXSUBIMAGE2DPROC>(gles2wLoad("glTexSubImage2D"));
    glUniform1f                           = reinterpret_cast<PFNGLUNIFORM1FPROC>(gles2wLoad("glUniform1f"));
    glUniform1fv                          = reinterpret_cast<PFNGLUNIFORM1FVPROC>(gles2wLoad("glUniform1fv"));
    glUniform1i                           = reinterpret_cast<PFNGLUNIFORM1IPROC>(gles2wLoad("glUniform1i"));
    glUniform1iv                          = reinterpret_cast<PFNGLUNIFORM1IVPROC>(gles2wLoad("glUniform1iv"));
    glUniform2f                           = reinterpret_cast<PFNGLUNIFORM2FPROC>(gles2wLoad("glUniform2f"));
    glUniform2fv                          = reinterpret_cast<PFNGLUNIFORM2FVPROC>(gles2wLoad("glUniform2fv"));
    glUniform2i                           = reinterpret_cast<PFNGLUNIFORM2IPROC>(gles2wLoad("glUniform2i"));
    glUniform2iv                          = reinterpret_cast<PFNGLUNIFORM2IVPROC>(gles2wLoad("glUniform2iv"));
    glUniform3f                           = reinterpret_cast<PFNGLUNIFORM3FPROC>(gles2wLoad("glUniform3f"));
    glUniform3fv                          = reinterpret_cast<PFNGLUNIFORM3FVPROC>(gles2wLoad("glUniform3fv"));
    glUniform3i                           = reinterpret_cast<PFNGLUNIFORM3IPROC>(gles2wLoad("glUniform3i"));
    glUniform3iv                          = reinterpret_cast<PFNGLUNIFORM3IVPROC>(gles2wLoad("glUniform3iv"));
    glUniform4f                           = reinterpret_cast<PFNGLUNIFORM4FPROC>(gles2wLoad("glUniform4f"));
    glUniform4fv                          = reinterpret_cast<PFNGLUNIFORM4FVPROC>(gles2wLoad("glUniform4fv"));
    glUniform4i                           = reinterpret_cast<PFNGLUNIFORM4IPROC>(gles2wLoad("glUniform4i"));
    glUniform4iv                          = reinterpret_cast<PFNGLUNIFORM4IVPROC>(gles2wLoad("glUniform4iv"));
    glUniformMatrix2fv                    = reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC>(gles2wLoad("glUniformMatrix2fv"));
    glUniformMatrix3fv                    = reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(gles2wLoad("glUniformMatrix3fv"));
    glUniformMatrix4fv                    = reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(gles2wLoad("glUniformMatrix4fv"));
    glUseProgram                          = reinterpret_cast<PFNGLUSEPROGRAMPROC>(gles2wLoad("glUseProgram"));
    glValidateProgram                     = reinterpret_cast<PFNGLVALIDATEPROGRAMPROC>(gles2wLoad("glValidateProgram"));
    glVertexAttrib1f                      = reinterpret_cast<PFNGLVERTEXATTRIB1FPROC>(gles2wLoad("glVertexAttrib1f"));
    glVertexAttrib1fv                     = reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC>(gles2wLoad("glVertexAttrib1fv"));
    glVertexAttrib2f                      = reinterpret_cast<PFNGLVERTEXATTRIB2FPROC>(gles2wLoad("glVertexAttrib2f"));
    glVertexAttrib2fv                     = reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC>(gles2wLoad("glVertexAttrib2fv"));
    glVertexAttrib3f                      = reinterpret_cast<PFNGLVERTEXATTRIB3FPROC>(gles2wLoad("glVertexAttrib3f"));
    glVertexAttrib3fv                     = reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC>(gles2wLoad("glVertexAttrib3fv"));
    glVertexAttrib4f                      = reinterpret_cast<PFNGLVERTEXATTRIB4FPROC>(gles2wLoad("glVertexAttrib4f"));
    glVertexAttrib4fv                     = reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC>(gles2wLoad("glVertexAttrib4fv"));
    glVertexAttribPointer                 = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(gles2wLoad("glVertexAttribPointer"));
    glViewport                            = reinterpret_cast<PFNGLVIEWPORTPROC>(gles2wLoad("glViewport"));

#if defined(GL_AMD_framebuffer_multisample_advanced)
    glRenderbufferStorageMultisampleAdvancedAMD      = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC>(gles2wLoad("glRenderbufferStorageMultisampleAdvancedAMD"));
    glNamedRenderbufferStorageMultisampleAdvancedAMD = reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC>(gles2wLoad("glNamedRenderbufferStorageMultisampleAdvancedAMD"));
#endif /* defined(GL_AMD_framebuffer_multisample_advanced) */

#if defined(GL_AMD_performance_monitor)
    glGetPerfMonitorGroupsAMD        = reinterpret_cast<PFNGLGETPERFMONITORGROUPSAMDPROC>(gles2wLoad("glGetPerfMonitorGroupsAMD"));
    glGetPerfMonitorCountersAMD      = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSAMDPROC>(gles2wLoad("glGetPerfMonitorCountersAMD"));
    glGetPerfMonitorGroupStringAMD   = reinterpret_cast<PFNGLGETPERFMONITORGROUPSTRINGAMDPROC>(gles2wLoad("glGetPerfMonitorGroupStringAMD"));
    glGetPerfMonitorCounterStringAMD = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC>(gles2wLoad("glGetPerfMonitorCounterStringAMD"));
    glGetPerfMonitorCounterInfoAMD   = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERINFOAMDPROC>(gles2wLoad("glGetPerfMonitorCounterInfoAMD"));
    glGenPerfMonitorsAMD             = reinterpret_cast<PFNGLGENPERFMONITORSAMDPROC>(gles2wLoad("glGenPerfMonitorsAMD"));
    glDeletePerfMonitorsAMD          = reinterpret_cast<PFNGLDELETEPERFMONITORSAMDPROC>(gles2wLoad("glDeletePerfMonitorsAMD"));
    glSelectPerfMonitorCountersAMD   = reinterpret_cast<PFNGLSELECTPERFMONITORCOUNTERSAMDPROC>(gles2wLoad("glSelectPerfMonitorCountersAMD"));
    glBeginPerfMonitorAMD            = reinterpret_cast<PFNGLBEGINPERFMONITORAMDPROC>(gles2wLoad("glBeginPerfMonitorAMD"));
    glEndPerfMonitorAMD              = reinterpret_cast<PFNGLENDPERFMONITORAMDPROC>(gles2wLoad("glEndPerfMonitorAMD"));
    glGetPerfMonitorCounterDataAMD   = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERDATAAMDPROC>(gles2wLoad("glGetPerfMonitorCounterDataAMD"));
#endif /* defined(GL_AMD_performance_monitor) */

#if defined(GL_ANGLE_framebuffer_blit)
    glBlitFramebufferANGLE = reinterpret_cast<PFNGLBLITFRAMEBUFFERANGLEPROC>(gles2wLoad("glBlitFramebufferANGLE"));
#endif /* defined(GL_ANGLE_framebuffer_blit) */

#if defined(GL_ANGLE_framebuffer_multisample)
    glRenderbufferStorageMultisampleANGLE = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC>(gles2wLoad("glRenderbufferStorageMultisampleANGLE"));
#endif /* defined(GL_ANGLE_framebuffer_multisample) */

#if defined(GL_ANGLE_instanced_arrays)
    glDrawArraysInstancedANGLE   = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC>(gles2wLoad("glDrawArraysInstancedANGLE"));
    glDrawElementsInstancedANGLE = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC>(gles2wLoad("glDrawElementsInstancedANGLE"));
    glVertexAttribDivisorANGLE   = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC>(gles2wLoad("glVertexAttribDivisorANGLE"));
#endif /* defined(GL_ANGLE_instanced_arrays) */

#if defined(GL_ANGLE_translated_shader_source)
    glGetTranslatedShaderSourceANGLE = reinterpret_cast<PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC>(gles2wLoad("glGetTranslatedShaderSourceANGLE"));
#endif /* defined(GL_ANGLE_translated_shader_source) */

#if defined(GL_APPLE_copy_texture_levels)
    glCopyTextureLevelsAPPLE = reinterpret_cast<PFNGLCOPYTEXTURELEVELSAPPLEPROC>(gles2wLoad("glCopyTextureLevelsAPPLE"));
#endif /* defined(GL_APPLE_copy_texture_levels) */

#if defined(GL_APPLE_framebuffer_multisample)
    glRenderbufferStorageMultisampleAPPLE = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC>(gles2wLoad("glRenderbufferStorageMultisampleAPPLE"));
    glResolveMultisampleFramebufferAPPLE  = reinterpret_cast<PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC>(gles2wLoad("glResolveMultisampleFramebufferAPPLE"));
#endif /* defined(GL_APPLE_framebuffer_multisample) */

#if defined(GL_APPLE_sync)
    glFenceSyncAPPLE      = reinterpret_cast<PFNGLFENCESYNCAPPLEPROC>(gles2wLoad("glFenceSyncAPPLE"));
    glIsSyncAPPLE         = reinterpret_cast<PFNGLISSYNCAPPLEPROC>(gles2wLoad("glIsSyncAPPLE"));
    glDeleteSyncAPPLE     = reinterpret_cast<PFNGLDELETESYNCAPPLEPROC>(gles2wLoad("glDeleteSyncAPPLE"));
    glClientWaitSyncAPPLE = reinterpret_cast<PFNGLCLIENTWAITSYNCAPPLEPROC>(gles2wLoad("glClientWaitSyncAPPLE"));
    glWaitSyncAPPLE       = reinterpret_cast<PFNGLWAITSYNCAPPLEPROC>(gles2wLoad("glWaitSyncAPPLE"));
    glGetInteger64vAPPLE  = reinterpret_cast<PFNGLGETINTEGER64VAPPLEPROC>(gles2wLoad("glGetInteger64vAPPLE"));
    glGetSyncivAPPLE      = reinterpret_cast<PFNGLGETSYNCIVAPPLEPROC>(gles2wLoad("glGetSyncivAPPLE"));
#endif /* defined(GL_APPLE_sync) */

#if defined(GL_EXT_EGL_image_storage)
    glEGLImageTargetTexStorageEXT = reinterpret_cast<PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC>(gles2wLoad("glEGLImageTargetTexStorageEXT"));

    glEGLImageTargetTextureStorageEXT = reinterpret_cast<PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC>(gles2wLoad("glEGLImageTargetTextureStorageEXT"));
#endif /* defined(GL_EXT_EGL_image_storage) */

#if defined(GL_EXT_base_instance)
    glDrawArraysInstancedBaseInstanceEXT             = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC>(gles2wLoad("glDrawArraysInstancedBaseInstanceEXT"));
    glDrawElementsInstancedBaseInstanceEXT           = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC>(gles2wLoad("glDrawElementsInstancedBaseInstanceEXT"));
    glDrawElementsInstancedBaseVertexBaseInstanceEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC>(gles2wLoad("glDrawElementsInstancedBaseVertexBaseInstanceEXT"));
#endif /* defined(GL_EXT_base_instance) */

#if defined(GL_EXT_blend_func_extended)
    glBindFragDataLocationIndexedEXT     = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC>(gles2wLoad("glBindFragDataLocationIndexedEXT"));
    glBindFragDataLocationEXT            = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONEXTPROC>(gles2wLoad("glBindFragDataLocationEXT"));
    glGetProgramResourceLocationIndexEXT = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC>(gles2wLoad("glGetProgramResourceLocationIndexEXT"));
    glGetFragDataIndexEXT                = reinterpret_cast<PFNGLGETFRAGDATAINDEXEXTPROC>(gles2wLoad("glGetFragDataIndexEXT"));
#endif /* defined(GL_EXT_blend_func_extended) */

#if defined(GL_EXT_buffer_storage)
    glBufferStorageEXT = reinterpret_cast<PFNGLBUFFERSTORAGEEXTPROC>(gles2wLoad("glBufferStorageEXT"));
#endif /* defined(GL_EXT_buffer_storage) */

#if defined(GL_EXT_clear_texture)
    glClearTexImageEXT    = reinterpret_cast<PFNGLCLEARTEXIMAGEEXTPROC>(gles2wLoad("glClearTexImageEXT"));
    glClearTexSubImageEXT = reinterpret_cast<PFNGLCLEARTEXSUBIMAGEEXTPROC>(gles2wLoad("glClearTexSubImageEXT"));
#endif /* defined(GL_EXT_clear_texture) */

#if defined(GL_EXT_clip_control)
    glClipControlEXT = reinterpret_cast<PFNGLCLIPCONTROLEXTPROC>(gles2wLoad("glClipControlEXT"));
#endif /* defined(GL_EXT_clip_control) */

#if defined(GL_EXT_copy_image)
    glCopyImageSubDataEXT = reinterpret_cast<PFNGLCOPYIMAGESUBDATAEXTPROC>(gles2wLoad("glCopyImageSubDataEXT"));
#endif /* defined(GL_EXT_copy_image) */

#if defined(GL_EXT_debug_label)
    glLabelObjectEXT    = reinterpret_cast<PFNGLLABELOBJECTEXTPROC>(gles2wLoad("glLabelObjectEXT"));
    glGetObjectLabelEXT = reinterpret_cast<PFNGLGETOBJECTLABELEXTPROC>(gles2wLoad("glGetObjectLabelEXT"));
#endif /* defined(GL_EXT_debug_label) */

#if defined(GL_EXT_debug_marker)
    glInsertEventMarkerEXT = reinterpret_cast<PFNGLINSERTEVENTMARKEREXTPROC>(gles2wLoad("glInsertEventMarkerEXT"));
    glPushGroupMarkerEXT   = reinterpret_cast<PFNGLPUSHGROUPMARKEREXTPROC>(gles2wLoad("glPushGroupMarkerEXT"));
    glPopGroupMarkerEXT    = reinterpret_cast<PFNGLPOPGROUPMARKEREXTPROC>(gles2wLoad("glPopGroupMarkerEXT"));
#endif /* defined(GL_EXT_debug_marker) */

#if defined(GL_EXT_discard_framebuffer)
    glDiscardFramebufferEXT = reinterpret_cast<PFNGLDISCARDFRAMEBUFFEREXTPROC>(gles2wLoad("glDiscardFramebufferEXT"));
#endif /* defined(GL_EXT_discard_framebuffer) */

#if defined(GL_EXT_disjoint_timer_query)
    glGenQueriesEXT          = reinterpret_cast<PFNGLGENQUERIESEXTPROC>(gles2wLoad("glGenQueriesEXT"));
    glDeleteQueriesEXT       = reinterpret_cast<PFNGLDELETEQUERIESEXTPROC>(gles2wLoad("glDeleteQueriesEXT"));
    glIsQueryEXT             = reinterpret_cast<PFNGLISQUERYEXTPROC>(gles2wLoad("glIsQueryEXT"));
    glBeginQueryEXT          = reinterpret_cast<PFNGLBEGINQUERYEXTPROC>(gles2wLoad("glBeginQueryEXT"));
    glEndQueryEXT            = reinterpret_cast<PFNGLENDQUERYEXTPROC>(gles2wLoad("glEndQueryEXT"));
    glQueryCounterEXT        = reinterpret_cast<PFNGLQUERYCOUNTEREXTPROC>(gles2wLoad("glQueryCounterEXT"));
    glGetQueryivEXT          = reinterpret_cast<PFNGLGETQUERYIVEXTPROC>(gles2wLoad("glGetQueryivEXT"));
    glGetQueryObjectivEXT    = reinterpret_cast<PFNGLGETQUERYOBJECTIVEXTPROC>(gles2wLoad("glGetQueryObjectivEXT"));
    glGetQueryObjectuivEXT   = reinterpret_cast<PFNGLGETQUERYOBJECTUIVEXTPROC>(gles2wLoad("glGetQueryObjectuivEXT"));
    glGetQueryObjecti64vEXT  = reinterpret_cast<PFNGLGETQUERYOBJECTI64VEXTPROC>(gles2wLoad("glGetQueryObjecti64vEXT"));
    glGetQueryObjectui64vEXT = reinterpret_cast<PFNGLGETQUERYOBJECTUI64VEXTPROC>(gles2wLoad("glGetQueryObjectui64vEXT"));
    glGetInteger64vEXT       = reinterpret_cast<PFNGLGETINTEGER64VEXTPROC>(gles2wLoad("glGetInteger64vEXT"));
#endif /* defined(GL_EXT_disjoint_timer_query) */

#if defined(GL_EXT_draw_buffers)
    glDrawBuffersEXT = reinterpret_cast<PFNGLDRAWBUFFERSEXTPROC>(gles2wLoad("glDrawBuffersEXT"));
#endif /* defined(GL_EXT_draw_buffers) */

#if defined(GL_EXT_draw_buffers_indexed)
    glEnableiEXT                = reinterpret_cast<PFNGLENABLEIEXTPROC>(gles2wLoad("glEnableiEXT"));
    glDisableiEXT               = reinterpret_cast<PFNGLDISABLEIEXTPROC>(gles2wLoad("glDisableiEXT"));
    glBlendEquationiEXT         = reinterpret_cast<PFNGLBLENDEQUATIONIEXTPROC>(gles2wLoad("glBlendEquationiEXT"));
    glBlendEquationSeparateiEXT = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIEXTPROC>(gles2wLoad("glBlendEquationSeparateiEXT"));
    glBlendFunciEXT             = reinterpret_cast<PFNGLBLENDFUNCIEXTPROC>(gles2wLoad("glBlendFunciEXT"));
    glBlendFuncSeparateiEXT     = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIEXTPROC>(gles2wLoad("glBlendFuncSeparateiEXT"));
    glColorMaskiEXT             = reinterpret_cast<PFNGLCOLORMASKIEXTPROC>(gles2wLoad("glColorMaskiEXT"));
    glIsEnablediEXT             = reinterpret_cast<PFNGLISENABLEDIEXTPROC>(gles2wLoad("glIsEnablediEXT"));
#endif /* defined(GL_EXT_draw_buffers_indexed) */

#if defined(GL_EXT_draw_elements_base_vertex)
    glDrawElementsBaseVertexEXT          = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXEXTPROC>(gles2wLoad("glDrawElementsBaseVertexEXT"));
    glDrawRangeElementsBaseVertexEXT     = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC>(gles2wLoad("glDrawRangeElementsBaseVertexEXT"));
    glDrawElementsInstancedBaseVertexEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC>(gles2wLoad("glDrawElementsInstancedBaseVertexEXT"));
    glMultiDrawElementsBaseVertexEXT     = reinterpret_cast<PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC>(gles2wLoad("glMultiDrawElementsBaseVertexEXT"));
#endif /* defined(GL_EXT_draw_elements_base_vertex) */

#if defined(GL_EXT_draw_instanced)
    glDrawArraysInstancedEXT   = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDEXTPROC>(gles2wLoad("glDrawArraysInstancedEXT"));
    glDrawElementsInstancedEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDEXTPROC>(gles2wLoad("glDrawElementsInstancedEXT"));
#endif /* defined(GL_EXT_draw_instanced) */

#if defined(GL_EXT_draw_transform_feedback)
    glDrawTransformFeedbackEXT          = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKEXTPROC>(gles2wLoad("glDrawTransformFeedbackEXT"));
    glDrawTransformFeedbackInstancedEXT = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC>(gles2wLoad("glDrawTransformFeedbackInstancedEXT"));
#endif /* defined(GL_EXT_draw_transform_feedback) */

#if defined(GL_EXT_external_buffer)
    glBufferStorageExternalEXT      = reinterpret_cast<PFNGLBUFFERSTORAGEEXTERNALEXTPROC>(gles2wLoad("glBufferStorageExternalEXT"));
    glNamedBufferStorageExternalEXT = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC>(gles2wLoad("glNamedBufferStorageExternalEXT"));
#endif /* defined(GL_EXT_external_buffer) */

#if defined(GL_EXT_geometry_shader)
    glFramebufferTextureEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREEXTPROC>(gles2wLoad("glFramebufferTextureEXT"));
#endif /* defined(GL_EXT_geometry_shader) */

#if defined(GL_EXT_instanced_arrays)
    glVertexAttribDivisorEXT = reinterpret_cast<PFNGLVERTEXATTRIBDIVISOREXTPROC>(gles2wLoad("glVertexAttribDivisorEXT"));
#endif /* defined(GL_EXT_instanced_arrays) */

#if defined(GL_EXT_map_buffer_range)
    glMapBufferRangeEXT         = reinterpret_cast<PFNGLMAPBUFFERRANGEEXTPROC>(gles2wLoad("glMapBufferRangeEXT"));
    glFlushMappedBufferRangeEXT = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC>(gles2wLoad("glFlushMappedBufferRangeEXT"));
#endif /* defined(GL_EXT_map_buffer_range) */

#if defined(GL_EXT_memory_object)
    glGetUnsignedBytevEXT           = reinterpret_cast<PFNGLGETUNSIGNEDBYTEVEXTPROC>(gles2wLoad("glGetUnsignedBytevEXT"));
    glGetUnsignedBytei_vEXT         = reinterpret_cast<PFNGLGETUNSIGNEDBYTEI_VEXTPROC>(gles2wLoad("glGetUnsignedBytei_vEXT"));
    glDeleteMemoryObjectsEXT        = reinterpret_cast<PFNGLDELETEMEMORYOBJECTSEXTPROC>(gles2wLoad("glDeleteMemoryObjectsEXT"));
    glIsMemoryObjectEXT             = reinterpret_cast<PFNGLISMEMORYOBJECTEXTPROC>(gles2wLoad("glIsMemoryObjectEXT"));
    glCreateMemoryObjectsEXT        = reinterpret_cast<PFNGLCREATEMEMORYOBJECTSEXTPROC>(gles2wLoad("glCreateMemoryObjectsEXT"));
    glMemoryObjectParameterivEXT    = reinterpret_cast<PFNGLMEMORYOBJECTPARAMETERIVEXTPROC>(gles2wLoad("glMemoryObjectParameterivEXT"));
    glGetMemoryObjectParameterivEXT = reinterpret_cast<PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC>(gles2wLoad("glGetMemoryObjectParameterivEXT"));
    glTexStorageMem2DEXT            = reinterpret_cast<PFNGLTEXSTORAGEMEM2DEXTPROC>(gles2wLoad("glTexStorageMem2DEXT"));
    glTexStorageMem2DMultisampleEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC>(gles2wLoad("glTexStorageMem2DMultisampleEXT"));
    glTexStorageMem3DEXT            = reinterpret_cast<PFNGLTEXSTORAGEMEM3DEXTPROC>(gles2wLoad("glTexStorageMem3DEXT"));
    glTexStorageMem3DMultisampleEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC>(gles2wLoad("glTexStorageMem3DMultisampleEXT"));
    glBufferStorageMemEXT           = reinterpret_cast<PFNGLBUFFERSTORAGEMEMEXTPROC>(gles2wLoad("glBufferStorageMemEXT"));

    glTextureStorageMem2DEXT            = reinterpret_cast<PFNGLTEXTURESTORAGEMEM2DEXTPROC>(gles2wLoad("glTextureStorageMem2DEXT"));
    glTextureStorageMem2DMultisampleEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC>(gles2wLoad("glTextureStorageMem2DMultisampleEXT"));
    glTextureStorageMem3DEXT            = reinterpret_cast<PFNGLTEXTURESTORAGEMEM3DEXTPROC>(gles2wLoad("glTextureStorageMem3DEXT"));
    glTextureStorageMem3DMultisampleEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC>(gles2wLoad("glTextureStorageMem3DMultisampleEXT"));
    glNamedBufferStorageMemEXT          = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC>(gles2wLoad("glNamedBufferStorageMemEXT"));
#endif /* defined(GL_EXT_memory_object) */

#if defined(GL_EXT_memory_object_fd)
    glImportMemoryFdEXT = reinterpret_cast<PFNGLIMPORTMEMORYFDEXTPROC>(gles2wLoad("glImportMemoryFdEXT"));
#endif /* defined(GL_EXT_memory_object_fd) */

#if defined(GL_EXT_memory_object_win32)
    glImportMemoryWin32HandleEXT = reinterpret_cast<PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC>(gles2wLoad("glImportMemoryWin32HandleEXT"));
    glImportMemoryWin32NameEXT   = reinterpret_cast<PFNGLIMPORTMEMORYWIN32NAMEEXTPROC>(gles2wLoad("glImportMemoryWin32NameEXT"));
#endif /* defined(GL_EXT_memory_object_win32) */

#if defined(GL_EXT_multi_draw_arrays)
    glMultiDrawArraysEXT   = reinterpret_cast<PFNGLMULTIDRAWARRAYSEXTPROC>(gles2wLoad("glMultiDrawArraysEXT"));
    glMultiDrawElementsEXT = reinterpret_cast<PFNGLMULTIDRAWELEMENTSEXTPROC>(gles2wLoad("glMultiDrawElementsEXT"));
#endif /* defined(GL_EXT_multi_draw_arrays) */

#if defined(GL_EXT_multi_draw_indirect)
    glMultiDrawArraysIndirectEXT   = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC>(gles2wLoad("glMultiDrawArraysIndirectEXT"));
    glMultiDrawElementsIndirectEXT = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC>(gles2wLoad("glMultiDrawElementsIndirectEXT"));
#endif /* defined(GL_EXT_multi_draw_indirect) */

#if defined(GL_EXT_multisampled_render_to_texture)
    glRenderbufferStorageMultisampleEXT  = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(gles2wLoad("glRenderbufferStorageMultisampleEXT"));
    glFramebufferTexture2DMultisampleEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC>(gles2wLoad("glFramebufferTexture2DMultisampleEXT"));
#endif /* defined(GL_EXT_multisampled_render_to_texture) */

#if defined(GL_EXT_multiview_draw_buffers)
    glReadBufferIndexedEXT  = reinterpret_cast<PFNGLREADBUFFERINDEXEDEXTPROC>(gles2wLoad("glReadBufferIndexedEXT"));
    glDrawBuffersIndexedEXT = reinterpret_cast<PFNGLDRAWBUFFERSINDEXEDEXTPROC>(gles2wLoad("glDrawBuffersIndexedEXT"));
    glGetIntegeri_vEXT      = reinterpret_cast<PFNGLGETINTEGERI_VEXTPROC>(gles2wLoad("glGetIntegeri_vEXT"));
#endif /* defined(GL_EXT_multiview_draw_buffers) */

#if defined(GL_EXT_polygon_offset_clamp)
    glPolygonOffsetClampEXT = reinterpret_cast<PFNGLPOLYGONOFFSETCLAMPEXTPROC>(gles2wLoad("glPolygonOffsetClampEXT"));
#endif /* defined(GL_EXT_polygon_offset_clamp) */

#if defined(GL_EXT_primitive_bounding_box)
    glPrimitiveBoundingBoxEXT = reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXEXTPROC>(gles2wLoad("glPrimitiveBoundingBoxEXT"));
#endif /* defined(GL_EXT_primitive_bounding_box) */

#if defined(GL_EXT_raster_multisample)
    glRasterSamplesEXT = reinterpret_cast<PFNGLRASTERSAMPLESEXTPROC>(gles2wLoad("glRasterSamplesEXT"));
#endif /* defined(GL_EXT_raster_multisample) */

#if defined(GL_EXT_robustness)
    glGetGraphicsResetStatusEXT = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSEXTPROC>(gles2wLoad("glGetGraphicsResetStatusEXT"));
    glReadnPixelsEXT            = reinterpret_cast<PFNGLREADNPIXELSEXTPROC>(gles2wLoad("glReadnPixelsEXT"));
    glGetnUniformfvEXT          = reinterpret_cast<PFNGLGETNUNIFORMFVEXTPROC>(gles2wLoad("glGetnUniformfvEXT"));
    glGetnUniformivEXT          = reinterpret_cast<PFNGLGETNUNIFORMIVEXTPROC>(gles2wLoad("glGetnUniformivEXT"));
#endif /* defined(GL_EXT_robustness) */

#if defined(GL_EXT_semaphore)
    glGenSemaphoresEXT              = reinterpret_cast<PFNGLGENSEMAPHORESEXTPROC>(gles2wLoad("glGenSemaphoresEXT"));
    glDeleteSemaphoresEXT           = reinterpret_cast<PFNGLDELETESEMAPHORESEXTPROC>(gles2wLoad("glDeleteSemaphoresEXT"));
    glIsSemaphoreEXT                = reinterpret_cast<PFNGLISSEMAPHOREEXTPROC>(gles2wLoad("glIsSemaphoreEXT"));
    glSemaphoreParameterui64vEXT    = reinterpret_cast<PFNGLSEMAPHOREPARAMETERUI64VEXTPROC>(gles2wLoad("glSemaphoreParameterui64vEXT"));
    glGetSemaphoreParameterui64vEXT = reinterpret_cast<PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC>(gles2wLoad("glGetSemaphoreParameterui64vEXT"));
    glWaitSemaphoreEXT              = reinterpret_cast<PFNGLWAITSEMAPHOREEXTPROC>(gles2wLoad("glWaitSemaphoreEXT"));
    glSignalSemaphoreEXT            = reinterpret_cast<PFNGLSIGNALSEMAPHOREEXTPROC>(gles2wLoad("glSignalSemaphoreEXT"));
#endif /* defined(GL_EXT_semaphore) */

#if defined(GL_EXT_semaphore_fd)
    glImportSemaphoreFdEXT = reinterpret_cast<PFNGLIMPORTSEMAPHOREFDEXTPROC>(gles2wLoad("glImportSemaphoreFdEXT"));
#endif /* defined(GL_EXT_semaphore_fd) */

#if defined(GL_EXT_semaphore_win32)
    glImportSemaphoreWin32HandleEXT = reinterpret_cast<PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC>(gles2wLoad("glImportSemaphoreWin32HandleEXT"));
    glImportSemaphoreWin32NameEXT   = reinterpret_cast<PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC>(gles2wLoad("glImportSemaphoreWin32NameEXT"));
#endif /* defined(GL_EXT_semaphore_win32) */

#if defined(GL_EXT_separate_shader_objects)
    glActiveShaderProgramEXT       = reinterpret_cast<PFNGLACTIVESHADERPROGRAMEXTPROC>(gles2wLoad("glActiveShaderProgramEXT"));
    glBindProgramPipelineEXT       = reinterpret_cast<PFNGLBINDPROGRAMPIPELINEEXTPROC>(gles2wLoad("glBindProgramPipelineEXT"));
    glCreateShaderProgramvEXT      = reinterpret_cast<PFNGLCREATESHADERPROGRAMVEXTPROC>(gles2wLoad("glCreateShaderProgramvEXT"));
    glDeleteProgramPipelinesEXT    = reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESEXTPROC>(gles2wLoad("glDeleteProgramPipelinesEXT"));
    glGenProgramPipelinesEXT       = reinterpret_cast<PFNGLGENPROGRAMPIPELINESEXTPROC>(gles2wLoad("glGenProgramPipelinesEXT"));
    glGetProgramPipelineInfoLogEXT = reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC>(gles2wLoad("glGetProgramPipelineInfoLogEXT"));
    glGetProgramPipelineivEXT      = reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVEXTPROC>(gles2wLoad("glGetProgramPipelineivEXT"));
    glIsProgramPipelineEXT         = reinterpret_cast<PFNGLISPROGRAMPIPELINEEXTPROC>(gles2wLoad("glIsProgramPipelineEXT"));
    glProgramParameteriEXT         = reinterpret_cast<PFNGLPROGRAMPARAMETERIEXTPROC>(gles2wLoad("glProgramParameteriEXT"));
    glProgramUniform1fEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM1FEXTPROC>(gles2wLoad("glProgramUniform1fEXT"));
    glProgramUniform1fvEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM1FVEXTPROC>(gles2wLoad("glProgramUniform1fvEXT"));
    glProgramUniform1iEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM1IEXTPROC>(gles2wLoad("glProgramUniform1iEXT"));
    glProgramUniform1ivEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM1IVEXTPROC>(gles2wLoad("glProgramUniform1ivEXT"));
    glProgramUniform2fEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM2FEXTPROC>(gles2wLoad("glProgramUniform2fEXT"));
    glProgramUniform2fvEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM2FVEXTPROC>(gles2wLoad("glProgramUniform2fvEXT"));
    glProgramUniform2iEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM2IEXTPROC>(gles2wLoad("glProgramUniform2iEXT"));
    glProgramUniform2ivEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM2IVEXTPROC>(gles2wLoad("glProgramUniform2ivEXT"));
    glProgramUniform3fEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM3FEXTPROC>(gles2wLoad("glProgramUniform3fEXT"));
    glProgramUniform3fvEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM3FVEXTPROC>(gles2wLoad("glProgramUniform3fvEXT"));
    glProgramUniform3iEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM3IEXTPROC>(gles2wLoad("glProgramUniform3iEXT"));
    glProgramUniform3ivEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM3IVEXTPROC>(gles2wLoad("glProgramUniform3ivEXT"));
    glProgramUniform4fEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM4FEXTPROC>(gles2wLoad("glProgramUniform4fEXT"));
    glProgramUniform4fvEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM4FVEXTPROC>(gles2wLoad("glProgramUniform4fvEXT"));
    glProgramUniform4iEXT          = reinterpret_cast<PFNGLPROGRAMUNIFORM4IEXTPROC>(gles2wLoad("glProgramUniform4iEXT"));
    glProgramUniform4ivEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM4IVEXTPROC>(gles2wLoad("glProgramUniform4ivEXT"));
    glProgramUniformMatrix2fvEXT   = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC>(gles2wLoad("glProgramUniformMatrix2fvEXT"));
    glProgramUniformMatrix3fvEXT   = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC>(gles2wLoad("glProgramUniformMatrix3fvEXT"));
    glProgramUniformMatrix4fvEXT   = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC>(gles2wLoad("glProgramUniformMatrix4fvEXT"));
    glUseProgramStagesEXT          = reinterpret_cast<PFNGLUSEPROGRAMSTAGESEXTPROC>(gles2wLoad("glUseProgramStagesEXT"));
    glValidateProgramPipelineEXT   = reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEEXTPROC>(gles2wLoad("glValidateProgramPipelineEXT"));

    glProgramUniform1uiEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIEXTPROC>(gles2wLoad("glProgramUniform1uiEXT"));
    glProgramUniform2uiEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIEXTPROC>(gles2wLoad("glProgramUniform2uiEXT"));
    glProgramUniform3uiEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIEXTPROC>(gles2wLoad("glProgramUniform3uiEXT"));
    glProgramUniform4uiEXT         = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIEXTPROC>(gles2wLoad("glProgramUniform4uiEXT"));
    glProgramUniform1uivEXT        = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVEXTPROC>(gles2wLoad("glProgramUniform1uivEXT"));
    glProgramUniform2uivEXT        = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVEXTPROC>(gles2wLoad("glProgramUniform2uivEXT"));
    glProgramUniform3uivEXT        = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVEXTPROC>(gles2wLoad("glProgramUniform3uivEXT"));
    glProgramUniform4uivEXT        = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVEXTPROC>(gles2wLoad("glProgramUniform4uivEXT"));
    glProgramUniformMatrix2x3fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC>(gles2wLoad("glProgramUniformMatrix2x3fvEXT"));
    glProgramUniformMatrix3x2fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC>(gles2wLoad("glProgramUniformMatrix3x2fvEXT"));
    glProgramUniformMatrix2x4fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC>(gles2wLoad("glProgramUniformMatrix2x4fvEXT"));
    glProgramUniformMatrix4x2fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC>(gles2wLoad("glProgramUniformMatrix4x2fvEXT"));
    glProgramUniformMatrix3x4fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC>(gles2wLoad("glProgramUniformMatrix3x4fvEXT"));
    glProgramUniformMatrix4x3fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC>(gles2wLoad("glProgramUniformMatrix4x3fvEXT"));
#endif /* defined(GL_EXT_separate_shader_objects) */

#if defined(GL_EXT_shader_framebuffer_fetch_non_coherent)
    glFramebufferFetchBarrierEXT = reinterpret_cast<PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC>(gles2wLoad("glFramebufferFetchBarrierEXT"));
#endif /* defined(GL_EXT_shader_framebuffer_fetch_non_coherent) */

#if defined(GL_EXT_shader_pixel_local_storage2)
    glFramebufferPixelLocalStorageSizeEXT    = reinterpret_cast<PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC>(gles2wLoad("glFramebufferPixelLocalStorageSizeEXT"));
    glGetFramebufferPixelLocalStorageSizeEXT = reinterpret_cast<PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC>(gles2wLoad("glGetFramebufferPixelLocalStorageSizeEXT"));
    glClearPixelLocalStorageuiEXT            = reinterpret_cast<PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC>(gles2wLoad("glClearPixelLocalStorageuiEXT"));
#endif /* defined(GL_EXT_shader_pixel_local_storage2) */

#if defined(GL_EXT_sparse_texture)
    glTexPageCommitmentEXT = reinterpret_cast<PFNGLTEXPAGECOMMITMENTEXTPROC>(gles2wLoad("glTexPageCommitmentEXT"));
#endif /* defined(GL_EXT_sparse_texture) */

#if defined(GL_EXT_tessellation_shader)
    glPatchParameteriEXT = reinterpret_cast<PFNGLPATCHPARAMETERIEXTPROC>(gles2wLoad("glPatchParameteriEXT"));
#endif /* defined(GL_EXT_tessellation_shader) */

#if defined(GL_EXT_texture_border_clamp)
    glTexParameterIivEXT         = reinterpret_cast<PFNGLTEXPARAMETERIIVEXTPROC>(gles2wLoad("glTexParameterIivEXT"));
    glTexParameterIuivEXT        = reinterpret_cast<PFNGLTEXPARAMETERIUIVEXTPROC>(gles2wLoad("glTexParameterIuivEXT"));
    glGetTexParameterIivEXT      = reinterpret_cast<PFNGLGETTEXPARAMETERIIVEXTPROC>(gles2wLoad("glGetTexParameterIivEXT"));
    glGetTexParameterIuivEXT     = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVEXTPROC>(gles2wLoad("glGetTexParameterIuivEXT"));
    glSamplerParameterIivEXT     = reinterpret_cast<PFNGLSAMPLERPARAMETERIIVEXTPROC>(gles2wLoad("glSamplerParameterIivEXT"));
    glSamplerParameterIuivEXT    = reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVEXTPROC>(gles2wLoad("glSamplerParameterIuivEXT"));
    glGetSamplerParameterIivEXT  = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVEXTPROC>(gles2wLoad("glGetSamplerParameterIivEXT"));
    glGetSamplerParameterIuivEXT = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVEXTPROC>(gles2wLoad("glGetSamplerParameterIuivEXT"));
#endif /* defined(GL_EXT_texture_border_clamp) */

#if defined(GL_EXT_texture_buffer)
    glTexBufferEXT      = reinterpret_cast<PFNGLTEXBUFFEREXTPROC>(gles2wLoad("glTexBufferEXT"));
    glTexBufferRangeEXT = reinterpret_cast<PFNGLTEXBUFFERRANGEEXTPROC>(gles2wLoad("glTexBufferRangeEXT"));
#endif /* defined(GL_EXT_texture_buffer) */

#if defined(GL_EXT_texture_storage)
    glTexStorage1DEXT = reinterpret_cast<PFNGLTEXSTORAGE1DEXTPROC>(gles2wLoad("glTexStorage1DEXT"));
    glTexStorage2DEXT = reinterpret_cast<PFNGLTEXSTORAGE2DEXTPROC>(gles2wLoad("glTexStorage2DEXT"));
    glTexStorage3DEXT = reinterpret_cast<PFNGLTEXSTORAGE3DEXTPROC>(gles2wLoad("glTexStorage3DEXT"));

    glTextureStorage1DEXT = reinterpret_cast<PFNGLTEXTURESTORAGE1DEXTPROC>(gles2wLoad("glTextureStorage1DEXT"));
    glTextureStorage2DEXT = reinterpret_cast<PFNGLTEXTURESTORAGE2DEXTPROC>(gles2wLoad("glTextureStorage2DEXT"));
    glTextureStorage3DEXT = reinterpret_cast<PFNGLTEXTURESTORAGE3DEXTPROC>(gles2wLoad("glTextureStorage3DEXT"));
#endif /* defined(GL_EXT_texture_storage) */

#if defined(GL_EXT_texture_view)
    glTextureViewEXT = reinterpret_cast<PFNGLTEXTUREVIEWEXTPROC>(gles2wLoad("glTextureViewEXT"));
#endif /* defined(GL_EXT_texture_view) */

#if defined(GL_NV_timeline_semaphore)
    glCreateSemaphoresNV        = reinterpret_cast<PFNGLCREATESEMAPHORESNVPROC>(gles2wLoad("glCreateSemaphoresNV"));
    glSemaphoreParameterivNV    = reinterpret_cast<PFNGLSEMAPHOREPARAMETERIVNVPROC>(gles2wLoad("glSemaphoreParameterivNV"));
    glGetSemaphoreParameterivNV = reinterpret_cast<PFNGLGETSEMAPHOREPARAMETERIVNVPROC>(gles2wLoad("glGetSemaphoreParameterivNV"));
#endif /* defined(GL_NV_timeline_semaphore) */

#if defined(GL_EXT_win32_keyed_mutex)
    glAcquireKeyedMutexWin32EXT = reinterpret_cast<PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC>(gles2wLoad("glAcquireKeyedMutexWin32EXT"));
    glReleaseKeyedMutexWin32EXT = reinterpret_cast<PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC>(gles2wLoad("glReleaseKeyedMutexWin32EXT"));
#endif /* defined(GL_EXT_win32_keyed_mutex) */

#if defined(GL_EXT_window_rectangles)
    glWindowRectanglesEXT = reinterpret_cast<PFNGLWINDOWRECTANGLESEXTPROC>(gles2wLoad("glWindowRectanglesEXT"));
#endif /* defined(GL_EXT_window_rectangles) */

#if defined(GL_IMG_bindless_texture)
    glGetTextureHandleIMG          = reinterpret_cast<PFNGLGETTEXTUREHANDLEIMGPROC>(gles2wLoad("glGetTextureHandleIMG"));
    glGetTextureSamplerHandleIMG   = reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLEIMGPROC>(gles2wLoad("glGetTextureSamplerHandleIMG"));
    glUniformHandleui64IMG         = reinterpret_cast<PFNGLUNIFORMHANDLEUI64IMGPROC>(gles2wLoad("glUniformHandleui64IMG"));
    glUniformHandleui64vIMG        = reinterpret_cast<PFNGLUNIFORMHANDLEUI64VIMGPROC>(gles2wLoad("glUniformHandleui64vIMG"));
    glProgramUniformHandleui64IMG  = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC>(gles2wLoad("glProgramUniformHandleui64IMG"));
    glProgramUniformHandleui64vIMG = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC>(gles2wLoad("glProgramUniformHandleui64vIMG"));
#endif /* defined(GL_IMG_bindless_texture) */

#if defined(GL_IMG_framebuffer_downsample)
    glFramebufferTexture2DDownsampleIMG    = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC>(gles2wLoad("glFramebufferTexture2DDownsampleIMG"));
    glFramebufferTextureLayerDownsampleIMG = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC>(gles2wLoad("glFramebufferTextureLayerDownsampleIMG"));
#endif /* defined(GL_IMG_framebuffer_downsample) */

#if defined(GL_IMG_multisampled_render_to_texture)
    glRenderbufferStorageMultisampleIMG  = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC>(gles2wLoad("glRenderbufferStorageMultisampleIMG"));
    glFramebufferTexture2DMultisampleIMG = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC>(gles2wLoad("glFramebufferTexture2DMultisampleIMG"));
#endif /* defined(GL_IMG_multisampled_render_to_texture) */

#if defined(GL_INTEL_framebuffer_CMAA)
    glApplyFramebufferAttachmentCMAAINTEL = reinterpret_cast<PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC>(gles2wLoad("glApplyFramebufferAttachmentCMAAINTEL"));
#endif /* defined(GL_INTEL_framebuffer_CMAA) */

#if defined(GL_INTEL_performance_query)
    glBeginPerfQueryINTEL       = reinterpret_cast<PFNGLBEGINPERFQUERYINTELPROC>(gles2wLoad("glBeginPerfQueryINTEL"));
    glCreatePerfQueryINTEL      = reinterpret_cast<PFNGLCREATEPERFQUERYINTELPROC>(gles2wLoad("glCreatePerfQueryINTEL"));
    glDeletePerfQueryINTEL      = reinterpret_cast<PFNGLDELETEPERFQUERYINTELPROC>(gles2wLoad("glDeletePerfQueryINTEL"));
    glEndPerfQueryINTEL         = reinterpret_cast<PFNGLENDPERFQUERYINTELPROC>(gles2wLoad("glEndPerfQueryINTEL"));
    glGetFirstPerfQueryIdINTEL  = reinterpret_cast<PFNGLGETFIRSTPERFQUERYIDINTELPROC>(gles2wLoad("glGetFirstPerfQueryIdINTEL"));
    glGetNextPerfQueryIdINTEL   = reinterpret_cast<PFNGLGETNEXTPERFQUERYIDINTELPROC>(gles2wLoad("glGetNextPerfQueryIdINTEL"));
    glGetPerfCounterInfoINTEL   = reinterpret_cast<PFNGLGETPERFCOUNTERINFOINTELPROC>(gles2wLoad("glGetPerfCounterInfoINTEL"));
    glGetPerfQueryDataINTEL     = reinterpret_cast<PFNGLGETPERFQUERYDATAINTELPROC>(gles2wLoad("glGetPerfQueryDataINTEL"));
    glGetPerfQueryIdByNameINTEL = reinterpret_cast<PFNGLGETPERFQUERYIDBYNAMEINTELPROC>(gles2wLoad("glGetPerfQueryIdByNameINTEL"));
    glGetPerfQueryInfoINTEL     = reinterpret_cast<PFNGLGETPERFQUERYINFOINTELPROC>(gles2wLoad("glGetPerfQueryInfoINTEL"));
#endif /* defined(GL_INTEL_performance_query) */

#if defined(GL_KHR_blend_equation_advanced)
    glBlendBarrierKHR = reinterpret_cast<PFNGLBLENDBARRIERKHRPROC>(gles2wLoad("glBlendBarrierKHR"));
#endif /* defined(GL_KHR_blend_equation_advanced) */

#if defined(GL_KHR_debug)
    glDebugMessageControlKHR  = reinterpret_cast<PFNGLDEBUGMESSAGECONTROLKHRPROC>(gles2wLoad("glDebugMessageControlKHR"));
    glDebugMessageInsertKHR   = reinterpret_cast<PFNGLDEBUGMESSAGEINSERTKHRPROC>(gles2wLoad("glDebugMessageInsertKHR"));
    glDebugMessageCallbackKHR = reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKKHRPROC>(gles2wLoad("glDebugMessageCallbackKHR"));
    glGetDebugMessageLogKHR   = reinterpret_cast<PFNGLGETDEBUGMESSAGELOGKHRPROC>(gles2wLoad("glGetDebugMessageLogKHR"));
    glPushDebugGroupKHR       = reinterpret_cast<PFNGLPUSHDEBUGGROUPKHRPROC>(gles2wLoad("glPushDebugGroupKHR"));
    glPopDebugGroupKHR        = reinterpret_cast<PFNGLPOPDEBUGGROUPKHRPROC>(gles2wLoad("glPopDebugGroupKHR"));
    glObjectLabelKHR          = reinterpret_cast<PFNGLOBJECTLABELKHRPROC>(gles2wLoad("glObjectLabelKHR"));
    glGetObjectLabelKHR       = reinterpret_cast<PFNGLGETOBJECTLABELKHRPROC>(gles2wLoad("glGetObjectLabelKHR"));
    glObjectPtrLabelKHR       = reinterpret_cast<PFNGLOBJECTPTRLABELKHRPROC>(gles2wLoad("glObjectPtrLabelKHR"));
    glGetObjectPtrLabelKHR    = reinterpret_cast<PFNGLGETOBJECTPTRLABELKHRPROC>(gles2wLoad("glGetObjectPtrLabelKHR"));
    glGetPointervKHR          = reinterpret_cast<PFNGLGETPOINTERVKHRPROC>(gles2wLoad("glGetPointervKHR"));
#endif /* defined(GL_KHR_debug) */

#if defined(GL_KHR_robustness)
    glGetGraphicsResetStatusKHR = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSKHRPROC>(gles2wLoad("glGetGraphicsResetStatusKHR"));
    glReadnPixelsKHR            = reinterpret_cast<PFNGLREADNPIXELSKHRPROC>(gles2wLoad("glReadnPixelsKHR"));
    glGetnUniformfvKHR          = reinterpret_cast<PFNGLGETNUNIFORMFVKHRPROC>(gles2wLoad("glGetnUniformfvKHR"));
    glGetnUniformivKHR          = reinterpret_cast<PFNGLGETNUNIFORMIVKHRPROC>(gles2wLoad("glGetnUniformivKHR"));
    glGetnUniformuivKHR         = reinterpret_cast<PFNGLGETNUNIFORMUIVKHRPROC>(gles2wLoad("glGetnUniformuivKHR"));
#endif /* defined(GL_KHR_robustness) */

#if defined(GL_KHR_parallel_shader_compile)
    glMaxShaderCompilerThreadsKHR = reinterpret_cast<PFNGLMAXSHADERCOMPILERTHREADSKHRPROC>(gles2wLoad("glMaxShaderCompilerThreadsKHR"));
#endif /* defined(GL_KHR_parallel_shader_compile) */

#if defined(GL_MESA_framebuffer_flip_y)
    glFramebufferParameteriMESA     = reinterpret_cast<PFNGLFRAMEBUFFERPARAMETERIMESAPROC>(gles2wLoad("glFramebufferParameteriMESA"));
    glGetFramebufferParameterivMESA = reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC>(gles2wLoad("glGetFramebufferParameterivMESA"));
#endif /* defined(GL_MESA_framebuffer_flip_y) */

#if defined(GL_NV_bindless_texture)
    glGetTextureHandleNV             = reinterpret_cast<PFNGLGETTEXTUREHANDLENVPROC>(gles2wLoad("glGetTextureHandleNV"));
    glGetTextureSamplerHandleNV      = reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLENVPROC>(gles2wLoad("glGetTextureSamplerHandleNV"));
    glMakeTextureHandleResidentNV    = reinterpret_cast<PFNGLMAKETEXTUREHANDLERESIDENTNVPROC>(gles2wLoad("glMakeTextureHandleResidentNV"));
    glMakeTextureHandleNonResidentNV = reinterpret_cast<PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC>(gles2wLoad("glMakeTextureHandleNonResidentNV"));
    glGetImageHandleNV               = reinterpret_cast<PFNGLGETIMAGEHANDLENVPROC>(gles2wLoad("glGetImageHandleNV"));
    glMakeImageHandleResidentNV      = reinterpret_cast<PFNGLMAKEIMAGEHANDLERESIDENTNVPROC>(gles2wLoad("glMakeImageHandleResidentNV"));
    glMakeImageHandleNonResidentNV   = reinterpret_cast<PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC>(gles2wLoad("glMakeImageHandleNonResidentNV"));
    glUniformHandleui64NV            = reinterpret_cast<PFNGLUNIFORMHANDLEUI64NVPROC>(gles2wLoad("glUniformHandleui64NV"));
    glUniformHandleui64vNV           = reinterpret_cast<PFNGLUNIFORMHANDLEUI64VNVPROC>(gles2wLoad("glUniformHandleui64vNV"));
    glProgramUniformHandleui64NV     = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC>(gles2wLoad("glProgramUniformHandleui64NV"));
    glProgramUniformHandleui64vNV    = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC>(gles2wLoad("glProgramUniformHandleui64vNV"));
    glIsTextureHandleResidentNV      = reinterpret_cast<PFNGLISTEXTUREHANDLERESIDENTNVPROC>(gles2wLoad("glIsTextureHandleResidentNV"));
    glIsImageHandleResidentNV        = reinterpret_cast<PFNGLISIMAGEHANDLERESIDENTNVPROC>(gles2wLoad("glIsImageHandleResidentNV"));
#endif /* defined(GL_NV_bindless_texture) */

#if defined(GL_NV_blend_equation_advanced)
    glBlendParameteriNV = reinterpret_cast<PFNGLBLENDPARAMETERINVPROC>(gles2wLoad("glBlendParameteriNV"));
    glBlendBarrierNV    = reinterpret_cast<PFNGLBLENDBARRIERNVPROC>(gles2wLoad("glBlendBarrierNV"));
#endif /* defined(GL_NV_blend_equation_advanced) */

#if defined(GL_NV_clip_space_w_scaling)
    glViewportPositionWScaleNV = reinterpret_cast<PFNGLVIEWPORTPOSITIONWSCALENVPROC>(gles2wLoad("glViewportPositionWScaleNV"));
#endif /* defined(GL_NV_clip_space_w_scaling) */

#if defined(GL_NV_conditional_render)
    glBeginConditionalRenderNV = reinterpret_cast<PFNGLBEGINCONDITIONALRENDERNVPROC>(gles2wLoad("glBeginConditionalRenderNV"));
    glEndConditionalRenderNV   = reinterpret_cast<PFNGLENDCONDITIONALRENDERNVPROC>(gles2wLoad("glEndConditionalRenderNV"));
#endif /* defined(GL_NV_conditional_render) */

#if defined(GL_NV_conservative_raster)
    glSubpixelPrecisionBiasNV = reinterpret_cast<PFNGLSUBPIXELPRECISIONBIASNVPROC>(gles2wLoad("glSubpixelPrecisionBiasNV"));
#endif /* defined(GL_NV_conservative_raster) */

#if defined(GL_NV_conservative_raster_pre_snap_triangles)
    glConservativeRasterParameteriNV = reinterpret_cast<PFNGLCONSERVATIVERASTERPARAMETERINVPROC>(gles2wLoad("glConservativeRasterParameteriNV"));
#endif /* defined(GL_NV_conservative_raster_pre_snap_triangles) */

#if defined(GL_NV_copy_buffer)
    glCopyBufferSubDataNV = reinterpret_cast<PFNGLCOPYBUFFERSUBDATANVPROC>(gles2wLoad("glCopyBufferSubDataNV"));
#endif /* defined(GL_NV_copy_buffer) */

#if defined(GL_NV_coverage_sample)
    glCoverageMaskNV      = reinterpret_cast<PFNGLCOVERAGEMASKNVPROC>(gles2wLoad("glCoverageMaskNV"));
    glCoverageOperationNV = reinterpret_cast<PFNGLCOVERAGEOPERATIONNVPROC>(gles2wLoad("glCoverageOperationNV"));
#endif /* defined(GL_NV_coverage_sample) */

#if defined(GL_NV_draw_buffers)
    glDrawBuffersNV = reinterpret_cast<PFNGLDRAWBUFFERSNVPROC>(gles2wLoad("glDrawBuffersNV"));
#endif /* defined(GL_NV_draw_buffers) */

#if defined(GL_NV_draw_instanced)
    glDrawArraysInstancedNV   = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDNVPROC>(gles2wLoad("glDrawArraysInstancedNV"));
    glDrawElementsInstancedNV = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDNVPROC>(gles2wLoad("glDrawElementsInstancedNV"));
#endif /* defined(GL_NV_draw_instanced) */

#if defined(GL_NV_draw_vulkan_image)
    glDrawVkImageNV       = reinterpret_cast<PFNGLDRAWVKIMAGENVPROC>(gles2wLoad("glDrawVkImageNV"));
    glGetVkProcAddrNV     = reinterpret_cast<PFNGLGETVKPROCADDRNVPROC>(gles2wLoad("glGetVkProcAddrNV"));
    glWaitVkSemaphoreNV   = reinterpret_cast<PFNGLWAITVKSEMAPHORENVPROC>(gles2wLoad("glWaitVkSemaphoreNV"));
    glSignalVkSemaphoreNV = reinterpret_cast<PFNGLSIGNALVKSEMAPHORENVPROC>(gles2wLoad("glSignalVkSemaphoreNV"));
    glSignalVkFenceNV     = reinterpret_cast<PFNGLSIGNALVKFENCENVPROC>(gles2wLoad("glSignalVkFenceNV"));
#endif /* defined(GL_NV_draw_vulkan_image) */

#if defined(GL_NV_fence)
    glDeleteFencesNV = reinterpret_cast<PFNGLDELETEFENCESNVPROC>(gles2wLoad("glDeleteFencesNV"));
    glGenFencesNV    = reinterpret_cast<PFNGLGENFENCESNVPROC>(gles2wLoad("glGenFencesNV"));
    glIsFenceNV      = reinterpret_cast<PFNGLISFENCENVPROC>(gles2wLoad("glIsFenceNV"));
    glTestFenceNV    = reinterpret_cast<PFNGLTESTFENCENVPROC>(gles2wLoad("glTestFenceNV"));
    glGetFenceivNV   = reinterpret_cast<PFNGLGETFENCEIVNVPROC>(gles2wLoad("glGetFenceivNV"));
    glFinishFenceNV  = reinterpret_cast<PFNGLFINISHFENCENVPROC>(gles2wLoad("glFinishFenceNV"));
    glSetFenceNV     = reinterpret_cast<PFNGLSETFENCENVPROC>(gles2wLoad("glSetFenceNV"));
#endif /* defined(GL_NV_fence) */

#if defined(GL_NV_fragment_coverage_to_color)
    glFragmentCoverageColorNV = reinterpret_cast<PFNGLFRAGMENTCOVERAGECOLORNVPROC>(gles2wLoad("glFragmentCoverageColorNV"));
#endif /* defined(GL_NV_fragment_coverage_to_color) */

#if defined(GL_NV_framebuffer_blit)
    glBlitFramebufferNV = reinterpret_cast<PFNGLBLITFRAMEBUFFERNVPROC>(gles2wLoad("glBlitFramebufferNV"));
#endif /* defined(GL_NV_framebuffer_blit) */

#if defined(GL_NV_framebuffer_mixed_samples)
    glCoverageModulationTableNV    = reinterpret_cast<PFNGLCOVERAGEMODULATIONTABLENVPROC>(gles2wLoad("glCoverageModulationTableNV"));
    glGetCoverageModulationTableNV = reinterpret_cast<PFNGLGETCOVERAGEMODULATIONTABLENVPROC>(gles2wLoad("glGetCoverageModulationTableNV"));
    glCoverageModulationNV         = reinterpret_cast<PFNGLCOVERAGEMODULATIONNVPROC>(gles2wLoad("glCoverageModulationNV"));
#endif /* defined(GL_NV_framebuffer_mixed_samples) */

#if defined(GL_NV_framebuffer_multisample)
    glRenderbufferStorageMultisampleNV = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC>(gles2wLoad("glRenderbufferStorageMultisampleNV"));
#endif /* defined(GL_NV_framebuffer_multisample) */

#if defined(GL_NV_gpu_shader5)
    glUniform1i64NV    = reinterpret_cast<PFNGLUNIFORM1I64NVPROC>(gles2wLoad("glUniform1i64NV"));
    glUniform2i64NV    = reinterpret_cast<PFNGLUNIFORM2I64NVPROC>(gles2wLoad("glUniform2i64NV"));
    glUniform3i64NV    = reinterpret_cast<PFNGLUNIFORM3I64NVPROC>(gles2wLoad("glUniform3i64NV"));
    glUniform4i64NV    = reinterpret_cast<PFNGLUNIFORM4I64NVPROC>(gles2wLoad("glUniform4i64NV"));
    glUniform1i64vNV   = reinterpret_cast<PFNGLUNIFORM1I64VNVPROC>(gles2wLoad("glUniform1i64vNV"));
    glUniform2i64vNV   = reinterpret_cast<PFNGLUNIFORM2I64VNVPROC>(gles2wLoad("glUniform2i64vNV"));
    glUniform3i64vNV   = reinterpret_cast<PFNGLUNIFORM3I64VNVPROC>(gles2wLoad("glUniform3i64vNV"));
    glUniform4i64vNV   = reinterpret_cast<PFNGLUNIFORM4I64VNVPROC>(gles2wLoad("glUniform4i64vNV"));
    glUniform1ui64NV   = reinterpret_cast<PFNGLUNIFORM1UI64NVPROC>(gles2wLoad("glUniform1ui64NV"));
    glUniform2ui64NV   = reinterpret_cast<PFNGLUNIFORM2UI64NVPROC>(gles2wLoad("glUniform2ui64NV"));
    glUniform3ui64NV   = reinterpret_cast<PFNGLUNIFORM3UI64NVPROC>(gles2wLoad("glUniform3ui64NV"));
    glUniform4ui64NV   = reinterpret_cast<PFNGLUNIFORM4UI64NVPROC>(gles2wLoad("glUniform4ui64NV"));
    glUniform1ui64vNV  = reinterpret_cast<PFNGLUNIFORM1UI64VNVPROC>(gles2wLoad("glUniform1ui64vNV"));
    glUniform2ui64vNV  = reinterpret_cast<PFNGLUNIFORM2UI64VNVPROC>(gles2wLoad("glUniform2ui64vNV"));
    glUniform3ui64vNV  = reinterpret_cast<PFNGLUNIFORM3UI64VNVPROC>(gles2wLoad("glUniform3ui64vNV"));
    glUniform4ui64vNV  = reinterpret_cast<PFNGLUNIFORM4UI64VNVPROC>(gles2wLoad("glUniform4ui64vNV"));
    glGetUniformi64vNV = reinterpret_cast<PFNGLGETUNIFORMI64VNVPROC>(gles2wLoad("glGetUniformi64vNV"));

    glProgramUniform1i64NV   = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64NVPROC>(gles2wLoad("glProgramUniform1i64NV"));
    glProgramUniform2i64NV   = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64NVPROC>(gles2wLoad("glProgramUniform2i64NV"));
    glProgramUniform3i64NV   = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64NVPROC>(gles2wLoad("glProgramUniform3i64NV"));
    glProgramUniform4i64NV   = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64NVPROC>(gles2wLoad("glProgramUniform4i64NV"));
    glProgramUniform1i64vNV  = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64VNVPROC>(gles2wLoad("glProgramUniform1i64vNV"));
    glProgramUniform2i64vNV  = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64VNVPROC>(gles2wLoad("glProgramUniform2i64vNV"));
    glProgramUniform3i64vNV  = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64VNVPROC>(gles2wLoad("glProgramUniform3i64vNV"));
    glProgramUniform4i64vNV  = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64VNVPROC>(gles2wLoad("glProgramUniform4i64vNV"));
    glProgramUniform1ui64NV  = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64NVPROC>(gles2wLoad("glProgramUniform1ui64NV"));
    glProgramUniform2ui64NV  = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64NVPROC>(gles2wLoad("glProgramUniform2ui64NV"));
    glProgramUniform3ui64NV  = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64NVPROC>(gles2wLoad("glProgramUniform3ui64NV"));
    glProgramUniform4ui64NV  = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64NVPROC>(gles2wLoad("glProgramUniform4ui64NV"));
    glProgramUniform1ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64VNVPROC>(gles2wLoad("glProgramUniform1ui64vNV"));
    glProgramUniform2ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64VNVPROC>(gles2wLoad("glProgramUniform2ui64vNV"));
    glProgramUniform3ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64VNVPROC>(gles2wLoad("glProgramUniform3ui64vNV"));
    glProgramUniform4ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64VNVPROC>(gles2wLoad("glProgramUniform4ui64vNV"));
#endif /* defined(GL_NV_gpu_shader5) */

#if defined(GL_NV_instanced_arrays)
    glVertexAttribDivisorNV = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORNVPROC>(gles2wLoad("glVertexAttribDivisorNV"));
#endif /* defined(GL_NV_instanced_arrays) */

#if defined(GL_NV_internalformat_sample_query)
    glGetInternalformatSampleivNV = reinterpret_cast<PFNGLGETINTERNALFORMATSAMPLEIVNVPROC>(gles2wLoad("glGetInternalformatSampleivNV"));
#endif /* defined(GL_NV_internalformat_sample_query) */

#if defined(GL_NV_memory_attachment)
    glGetMemoryObjectDetachedResourcesuivNV = reinterpret_cast<PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC>(gles2wLoad("glGetMemoryObjectDetachedResourcesuivNV"));
    glResetMemoryObjectParameterNV          = reinterpret_cast<PFNGLRESETMEMORYOBJECTPARAMETERNVPROC>(gles2wLoad("glResetMemoryObjectParameterNV"));
    glTexAttachMemoryNV                     = reinterpret_cast<PFNGLTEXATTACHMEMORYNVPROC>(gles2wLoad("glTexAttachMemoryNV"));
    glBufferAttachMemoryNV                  = reinterpret_cast<PFNGLBUFFERATTACHMEMORYNVPROC>(gles2wLoad("glBufferAttachMemoryNV"));

    glTextureAttachMemoryNV     = reinterpret_cast<PFNGLTEXTUREATTACHMEMORYNVPROC>(gles2wLoad("glTextureAttachMemoryNV"));
    glNamedBufferAttachMemoryNV = reinterpret_cast<PFNGLNAMEDBUFFERATTACHMEMORYNVPROC>(gles2wLoad("glNamedBufferAttachMemoryNV"));
#endif /* defined(GL_NV_memory_attachment) */

#if defined(GL_NV_memory_object_sparse)
    glBufferPageCommitmentMemNV = reinterpret_cast<PFNGLBUFFERPAGECOMMITMENTMEMNVPROC>(gles2wLoad("glBufferPageCommitmentMemNV"));
    glTexPageCommitmentMemNV    = reinterpret_cast<PFNGLTEXPAGECOMMITMENTMEMNVPROC>(gles2wLoad("glTexPageCommitmentMemNV"));

    glNamedBufferPageCommitmentMemNV = reinterpret_cast<PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC>(gles2wLoad("glNamedBufferPageCommitmentMemNV"));
    glTexturePageCommitmentMemNV     = reinterpret_cast<PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC>(gles2wLoad("glTexturePageCommitmentMemNV"));
#endif /* defined(GL_NV_memory_object_sparse) */

#if defined(GL_NV_mesh_shader)
    glDrawMeshTasksNV                   = reinterpret_cast<PFNGLDRAWMESHTASKSNVPROC>(gles2wLoad("glDrawMeshTasksNV"));
    glDrawMeshTasksIndirectNV           = reinterpret_cast<PFNGLDRAWMESHTASKSINDIRECTNVPROC>(gles2wLoad("glDrawMeshTasksIndirectNV"));
    glMultiDrawMeshTasksIndirectNV      = reinterpret_cast<PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC>(gles2wLoad("glMultiDrawMeshTasksIndirectNV"));
    glMultiDrawMeshTasksIndirectCountNV = reinterpret_cast<PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC>(gles2wLoad("glMultiDrawMeshTasksIndirectCountNV"));
#endif /* defined(GL_NV_mesh_shader) */

#if defined(GL_NV_non_square_matrices)
    glUniformMatrix2x3fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVNVPROC>(gles2wLoad("glUniformMatrix2x3fvNV"));
    glUniformMatrix3x2fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVNVPROC>(gles2wLoad("glUniformMatrix3x2fvNV"));
    glUniformMatrix2x4fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVNVPROC>(gles2wLoad("glUniformMatrix2x4fvNV"));
    glUniformMatrix4x2fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVNVPROC>(gles2wLoad("glUniformMatrix4x2fvNV"));
    glUniformMatrix3x4fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVNVPROC>(gles2wLoad("glUniformMatrix3x4fvNV"));
    glUniformMatrix4x3fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVNVPROC>(gles2wLoad("glUniformMatrix4x3fvNV"));
#endif /* defined(GL_NV_non_square_matrices) */

#if defined(GL_NV_path_rendering)
    glGenPathsNV                   = reinterpret_cast<PFNGLGENPATHSNVPROC>(gles2wLoad("glGenPathsNV"));
    glDeletePathsNV                = reinterpret_cast<PFNGLDELETEPATHSNVPROC>(gles2wLoad("glDeletePathsNV"));
    glIsPathNV                     = reinterpret_cast<PFNGLISPATHNVPROC>(gles2wLoad("glIsPathNV"));
    glPathCommandsNV               = reinterpret_cast<PFNGLPATHCOMMANDSNVPROC>(gles2wLoad("glPathCommandsNV"));
    glPathCoordsNV                 = reinterpret_cast<PFNGLPATHCOORDSNVPROC>(gles2wLoad("glPathCoordsNV"));
    glPathSubCommandsNV            = reinterpret_cast<PFNGLPATHSUBCOMMANDSNVPROC>(gles2wLoad("glPathSubCommandsNV"));
    glPathSubCoordsNV              = reinterpret_cast<PFNGLPATHSUBCOORDSNVPROC>(gles2wLoad("glPathSubCoordsNV"));
    glPathStringNV                 = reinterpret_cast<PFNGLPATHSTRINGNVPROC>(gles2wLoad("glPathStringNV"));
    glPathGlyphsNV                 = reinterpret_cast<PFNGLPATHGLYPHSNVPROC>(gles2wLoad("glPathGlyphsNV"));
    glPathGlyphRangeNV             = reinterpret_cast<PFNGLPATHGLYPHRANGENVPROC>(gles2wLoad("glPathGlyphRangeNV"));
    glWeightPathsNV                = reinterpret_cast<PFNGLWEIGHTPATHSNVPROC>(gles2wLoad("glWeightPathsNV"));
    glCopyPathNV                   = reinterpret_cast<PFNGLCOPYPATHNVPROC>(gles2wLoad("glCopyPathNV"));
    glInterpolatePathsNV           = reinterpret_cast<PFNGLINTERPOLATEPATHSNVPROC>(gles2wLoad("glInterpolatePathsNV"));
    glTransformPathNV              = reinterpret_cast<PFNGLTRANSFORMPATHNVPROC>(gles2wLoad("glTransformPathNV"));
    glPathParameterivNV            = reinterpret_cast<PFNGLPATHPARAMETERIVNVPROC>(gles2wLoad("glPathParameterivNV"));
    glPathParameteriNV             = reinterpret_cast<PFNGLPATHPARAMETERINVPROC>(gles2wLoad("glPathParameteriNV"));
    glPathParameterfvNV            = reinterpret_cast<PFNGLPATHPARAMETERFVNVPROC>(gles2wLoad("glPathParameterfvNV"));
    glPathParameterfNV             = reinterpret_cast<PFNGLPATHPARAMETERFNVPROC>(gles2wLoad("glPathParameterfNV"));
    glPathDashArrayNV              = reinterpret_cast<PFNGLPATHDASHARRAYNVPROC>(gles2wLoad("glPathDashArrayNV"));
    glPathStencilFuncNV            = reinterpret_cast<PFNGLPATHSTENCILFUNCNVPROC>(gles2wLoad("glPathStencilFuncNV"));
    glPathStencilDepthOffsetNV     = reinterpret_cast<PFNGLPATHSTENCILDEPTHOFFSETNVPROC>(gles2wLoad("glPathStencilDepthOffsetNV"));
    glStencilFillPathNV            = reinterpret_cast<PFNGLSTENCILFILLPATHNVPROC>(gles2wLoad("glStencilFillPathNV"));
    glStencilStrokePathNV          = reinterpret_cast<PFNGLSTENCILSTROKEPATHNVPROC>(gles2wLoad("glStencilStrokePathNV"));
    glStencilFillPathInstancedNV   = reinterpret_cast<PFNGLSTENCILFILLPATHINSTANCEDNVPROC>(gles2wLoad("glStencilFillPathInstancedNV"));
    glStencilStrokePathInstancedNV = reinterpret_cast<PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC>(gles2wLoad("glStencilStrokePathInstancedNV"));
    glPathCoverDepthFuncNV         = reinterpret_cast<PFNGLPATHCOVERDEPTHFUNCNVPROC>(gles2wLoad("glPathCoverDepthFuncNV"));
    glCoverFillPathNV              = reinterpret_cast<PFNGLCOVERFILLPATHNVPROC>(gles2wLoad("glCoverFillPathNV"));
    glCoverStrokePathNV            = reinterpret_cast<PFNGLCOVERSTROKEPATHNVPROC>(gles2wLoad("glCoverStrokePathNV"));
    glCoverFillPathInstancedNV     = reinterpret_cast<PFNGLCOVERFILLPATHINSTANCEDNVPROC>(gles2wLoad("glCoverFillPathInstancedNV"));
    glCoverStrokePathInstancedNV   = reinterpret_cast<PFNGLCOVERSTROKEPATHINSTANCEDNVPROC>(gles2wLoad("glCoverStrokePathInstancedNV"));
    glGetPathParameterivNV         = reinterpret_cast<PFNGLGETPATHPARAMETERIVNVPROC>(gles2wLoad("glGetPathParameterivNV"));
    glGetPathParameterfvNV         = reinterpret_cast<PFNGLGETPATHPARAMETERFVNVPROC>(gles2wLoad("glGetPathParameterfvNV"));
    glGetPathCommandsNV            = reinterpret_cast<PFNGLGETPATHCOMMANDSNVPROC>(gles2wLoad("glGetPathCommandsNV"));
    glGetPathCoordsNV              = reinterpret_cast<PFNGLGETPATHCOORDSNVPROC>(gles2wLoad("glGetPathCoordsNV"));
    glGetPathDashArrayNV           = reinterpret_cast<PFNGLGETPATHDASHARRAYNVPROC>(gles2wLoad("glGetPathDashArrayNV"));
    glGetPathMetricsNV             = reinterpret_cast<PFNGLGETPATHMETRICSNVPROC>(gles2wLoad("glGetPathMetricsNV"));
    glGetPathMetricRangeNV         = reinterpret_cast<PFNGLGETPATHMETRICRANGENVPROC>(gles2wLoad("glGetPathMetricRangeNV"));
    glGetPathSpacingNV             = reinterpret_cast<PFNGLGETPATHSPACINGNVPROC>(gles2wLoad("glGetPathSpacingNV"));
    glIsPointInFillPathNV          = reinterpret_cast<PFNGLISPOINTINFILLPATHNVPROC>(gles2wLoad("glIsPointInFillPathNV"));
    glIsPointInStrokePathNV        = reinterpret_cast<PFNGLISPOINTINSTROKEPATHNVPROC>(gles2wLoad("glIsPointInStrokePathNV"));
    glGetPathLengthNV              = reinterpret_cast<PFNGLGETPATHLENGTHNVPROC>(gles2wLoad("glGetPathLengthNV"));
    glPointAlongPathNV             = reinterpret_cast<PFNGLPOINTALONGPATHNVPROC>(gles2wLoad("glPointAlongPathNV"));

    glMatrixLoad3x2fNV                      = reinterpret_cast<PFNGLMATRIXLOAD3X2FNVPROC>(gles2wLoad("glMatrixLoad3x2fNV"));
    glMatrixLoad3x3fNV                      = reinterpret_cast<PFNGLMATRIXLOAD3X3FNVPROC>(gles2wLoad("glMatrixLoad3x3fNV"));
    glMatrixLoadTranspose3x3fNV             = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC>(gles2wLoad("glMatrixLoadTranspose3x3fNV"));
    glMatrixMult3x2fNV                      = reinterpret_cast<PFNGLMATRIXMULT3X2FNVPROC>(gles2wLoad("glMatrixMult3x2fNV"));
    glMatrixMult3x3fNV                      = reinterpret_cast<PFNGLMATRIXMULT3X3FNVPROC>(gles2wLoad("glMatrixMult3x3fNV"));
    glMatrixMultTranspose3x3fNV             = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC>(gles2wLoad("glMatrixMultTranspose3x3fNV"));
    glStencilThenCoverFillPathNV            = reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHNVPROC>(gles2wLoad("glStencilThenCoverFillPathNV"));
    glStencilThenCoverStrokePathNV          = reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC>(gles2wLoad("glStencilThenCoverStrokePathNV"));
    glStencilThenCoverFillPathInstancedNV   = reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC>(gles2wLoad("glStencilThenCoverFillPathInstancedNV"));
    glStencilThenCoverStrokePathInstancedNV = reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC>(gles2wLoad("glStencilThenCoverStrokePathInstancedNV"));
    glPathGlyphIndexRangeNV                 = reinterpret_cast<PFNGLPATHGLYPHINDEXRANGENVPROC>(gles2wLoad("glPathGlyphIndexRangeNV"));

    glPathGlyphIndexArrayNV         = reinterpret_cast<PFNGLPATHGLYPHINDEXARRAYNVPROC>(gles2wLoad("glPathGlyphIndexArrayNV"));
    glPathMemoryGlyphIndexArrayNV   = reinterpret_cast<PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC>(gles2wLoad("glPathMemoryGlyphIndexArrayNV"));
    glProgramPathFragmentInputGenNV = reinterpret_cast<PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC>(gles2wLoad("glProgramPathFragmentInputGenNV"));
    glGetProgramResourcefvNV        = reinterpret_cast<PFNGLGETPROGRAMRESOURCEFVNVPROC>(gles2wLoad("glGetProgramResourcefvNV"));

    glMatrixFrustumEXT        = reinterpret_cast<PFNGLMATRIXFRUSTUMEXTPROC>(gles2wLoad("glMatrixFrustumEXT"));
    glMatrixLoadIdentityEXT   = reinterpret_cast<PFNGLMATRIXLOADIDENTITYEXTPROC>(gles2wLoad("glMatrixLoadIdentityEXT"));
    glMatrixLoadTransposefEXT = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEFEXTPROC>(gles2wLoad("glMatrixLoadTransposefEXT"));
    glMatrixLoadTransposedEXT = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEDEXTPROC>(gles2wLoad("glMatrixLoadTransposedEXT"));
    glMatrixLoadfEXT          = reinterpret_cast<PFNGLMATRIXLOADFEXTPROC>(gles2wLoad("glMatrixLoadfEXT"));
    glMatrixLoaddEXT          = reinterpret_cast<PFNGLMATRIXLOADDEXTPROC>(gles2wLoad("glMatrixLoaddEXT"));
    glMatrixMultTransposefEXT = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEFEXTPROC>(gles2wLoad("glMatrixMultTransposefEXT"));
    glMatrixMultTransposedEXT = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEDEXTPROC>(gles2wLoad("glMatrixMultTransposedEXT"));
    glMatrixMultfEXT          = reinterpret_cast<PFNGLMATRIXMULTFEXTPROC>(gles2wLoad("glMatrixMultfEXT"));
    glMatrixMultdEXT          = reinterpret_cast<PFNGLMATRIXMULTDEXTPROC>(gles2wLoad("glMatrixMultdEXT"));
    glMatrixOrthoEXT          = reinterpret_cast<PFNGLMATRIXORTHOEXTPROC>(gles2wLoad("glMatrixOrthoEXT"));
    glMatrixPopEXT            = reinterpret_cast<PFNGLMATRIXPOPEXTPROC>(gles2wLoad("glMatrixPopEXT"));
    glMatrixPushEXT           = reinterpret_cast<PFNGLMATRIXPUSHEXTPROC>(gles2wLoad("glMatrixPushEXT"));
    glMatrixRotatefEXT        = reinterpret_cast<PFNGLMATRIXROTATEFEXTPROC>(gles2wLoad("glMatrixRotatefEXT"));
    glMatrixRotatedEXT        = reinterpret_cast<PFNGLMATRIXROTATEDEXTPROC>(gles2wLoad("glMatrixRotatedEXT"));
    glMatrixScalefEXT         = reinterpret_cast<PFNGLMATRIXSCALEFEXTPROC>(gles2wLoad("glMatrixScalefEXT"));
    glMatrixScaledEXT         = reinterpret_cast<PFNGLMATRIXSCALEDEXTPROC>(gles2wLoad("glMatrixScaledEXT"));
    glMatrixTranslatefEXT     = reinterpret_cast<PFNGLMATRIXTRANSLATEFEXTPROC>(gles2wLoad("glMatrixTranslatefEXT"));
    glMatrixTranslatedEXT     = reinterpret_cast<PFNGLMATRIXTRANSLATEDEXTPROC>(gles2wLoad("glMatrixTranslatedEXT"));
#endif /* defined(GL_NV_path_rendering) */

#if defined(GL_NV_polygon_mode)
    glPolygonModeNV = reinterpret_cast<PFNGLPOLYGONMODENVPROC>(gles2wLoad("glPolygonModeNV"));
#endif /* defined(GL_NV_polygon_mode) */

#if defined(GL_NV_read_buffer)
    glReadBufferNV = reinterpret_cast<PFNGLREADBUFFERNVPROC>(gles2wLoad("glReadBufferNV"));
#endif /* defined(GL_NV_read_buffer) */

#if defined(GL_NV_sample_locations)
    glFramebufferSampleLocationsfvNV      = reinterpret_cast<PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(gles2wLoad("glFramebufferSampleLocationsfvNV"));
    glNamedFramebufferSampleLocationsfvNV = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(gles2wLoad("glNamedFramebufferSampleLocationsfvNV"));
    glResolveDepthValuesNV                = reinterpret_cast<PFNGLRESOLVEDEPTHVALUESNVPROC>(gles2wLoad("glResolveDepthValuesNV"));
#endif /* defined(GL_NV_sample_locations) */

#if defined(GL_NV_scissor_exclusive)
    glScissorExclusiveNV       = reinterpret_cast<PFNGLSCISSOREXCLUSIVENVPROC>(gles2wLoad("glScissorExclusiveNV"));
    glScissorExclusiveArrayvNV = reinterpret_cast<PFNGLSCISSOREXCLUSIVEARRAYVNVPROC>(gles2wLoad("glScissorExclusiveArrayvNV"));
#endif /* defined(GL_NV_scissor_exclusive) */

#if defined(GL_NV_shading_rate_image)
    glBindShadingRateImageNV           = reinterpret_cast<PFNGLBINDSHADINGRATEIMAGENVPROC>(gles2wLoad("glBindShadingRateImageNV"));
    glGetShadingRateImagePaletteNV     = reinterpret_cast<PFNGLGETSHADINGRATEIMAGEPALETTENVPROC>(gles2wLoad("glGetShadingRateImagePaletteNV"));
    glGetShadingRateSampleLocationivNV = reinterpret_cast<PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC>(gles2wLoad("glGetShadingRateSampleLocationivNV"));
    glShadingRateImageBarrierNV        = reinterpret_cast<PFNGLSHADINGRATEIMAGEBARRIERNVPROC>(gles2wLoad("glShadingRateImageBarrierNV"));
    glShadingRateImagePaletteNV        = reinterpret_cast<PFNGLSHADINGRATEIMAGEPALETTENVPROC>(gles2wLoad("glShadingRateImagePaletteNV"));
    glShadingRateSampleOrderNV         = reinterpret_cast<PFNGLSHADINGRATESAMPLEORDERNVPROC>(gles2wLoad("glShadingRateSampleOrderNV"));
    glShadingRateSampleOrderCustomNV   = reinterpret_cast<PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC>(gles2wLoad("glShadingRateSampleOrderCustomNV"));
#endif /* defined(GL_NV_shading_rate_image) */

#if defined(GL_NV_viewport_array)
    glViewportArrayvNV     = reinterpret_cast<PFNGLVIEWPORTARRAYVNVPROC>(gles2wLoad("glViewportArrayvNV"));
    glViewportIndexedfNV   = reinterpret_cast<PFNGLVIEWPORTINDEXEDFNVPROC>(gles2wLoad("glViewportIndexedfNV"));
    glViewportIndexedfvNV  = reinterpret_cast<PFNGLVIEWPORTINDEXEDFVNVPROC>(gles2wLoad("glViewportIndexedfvNV"));
    glScissorArrayvNV      = reinterpret_cast<PFNGLSCISSORARRAYVNVPROC>(gles2wLoad("glScissorArrayvNV"));
    glScissorIndexedNV     = reinterpret_cast<PFNGLSCISSORINDEXEDNVPROC>(gles2wLoad("glScissorIndexedNV"));
    glScissorIndexedvNV    = reinterpret_cast<PFNGLSCISSORINDEXEDVNVPROC>(gles2wLoad("glScissorIndexedvNV"));
    glDepthRangeArrayfvNV  = reinterpret_cast<PFNGLDEPTHRANGEARRAYFVNVPROC>(gles2wLoad("glDepthRangeArrayfvNV"));
    glDepthRangeIndexedfNV = reinterpret_cast<PFNGLDEPTHRANGEINDEXEDFNVPROC>(gles2wLoad("glDepthRangeIndexedfNV"));
    glGetFloati_vNV        = reinterpret_cast<PFNGLGETFLOATI_VNVPROC>(gles2wLoad("glGetFloati_vNV"));
    glEnableiNV            = reinterpret_cast<PFNGLENABLEINVPROC>(gles2wLoad("glEnableiNV"));
    glDisableiNV           = reinterpret_cast<PFNGLDISABLEINVPROC>(gles2wLoad("glDisableiNV"));
    glIsEnablediNV         = reinterpret_cast<PFNGLISENABLEDINVPROC>(gles2wLoad("glIsEnablediNV"));
#endif /* defined(GL_NV_viewport_array) */

#if defined(GL_NV_viewport_swizzle)
    glViewportSwizzleNV = reinterpret_cast<PFNGLVIEWPORTSWIZZLENVPROC>(gles2wLoad("glViewportSwizzleNV"));
#endif /* defined(GL_NV_viewport_swizzle) */

#if defined(GL_OES_EGL_image)
    glEGLImageTargetTexture2DOES           = reinterpret_cast<PFNGLEGLIMAGETARGETTEXTURE2DOESPROC>(gles2wLoad("glEGLImageTargetTexture2DOES"));
    glEGLImageTargetRenderbufferStorageOES = reinterpret_cast<PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC>(gles2wLoad("glEGLImageTargetRenderbufferStorageOES"));
#endif /* defined(GL_OES_EGL_image) */

#if defined(GL_OES_copy_image)
    glCopyImageSubDataOES = reinterpret_cast<PFNGLCOPYIMAGESUBDATAOESPROC>(gles2wLoad("glCopyImageSubDataOES"));
#endif /* defined(GL_OES_copy_image) */

#if defined(GL_OES_draw_buffers_indexed)
    glEnableiOES                = reinterpret_cast<PFNGLENABLEIOESPROC>(gles2wLoad("glEnableiOES"));
    glDisableiOES               = reinterpret_cast<PFNGLDISABLEIOESPROC>(gles2wLoad("glDisableiOES"));
    glBlendEquationiOES         = reinterpret_cast<PFNGLBLENDEQUATIONIOESPROC>(gles2wLoad("glBlendEquationiOES"));
    glBlendEquationSeparateiOES = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIOESPROC>(gles2wLoad("glBlendEquationSeparateiOES"));
    glBlendFunciOES             = reinterpret_cast<PFNGLBLENDFUNCIOESPROC>(gles2wLoad("glBlendFunciOES"));
    glBlendFuncSeparateiOES     = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIOESPROC>(gles2wLoad("glBlendFuncSeparateiOES"));
    glColorMaskiOES             = reinterpret_cast<PFNGLCOLORMASKIOESPROC>(gles2wLoad("glColorMaskiOES"));
    glIsEnablediOES             = reinterpret_cast<PFNGLISENABLEDIOESPROC>(gles2wLoad("glIsEnablediOES"));
#endif /* defined(GL_OES_draw_buffers_indexed) */

#if defined(GL_OES_draw_elements_base_vertex)
    glDrawElementsBaseVertexOES          = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXOESPROC>(gles2wLoad("glDrawElementsBaseVertexOES"));
    glDrawRangeElementsBaseVertexOES     = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC>(gles2wLoad("glDrawRangeElementsBaseVertexOES"));
    glDrawElementsInstancedBaseVertexOES = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC>(gles2wLoad("glDrawElementsInstancedBaseVertexOES"));
#endif /* defined(GL_OES_draw_elements_base_vertex) */

#if defined(GL_OES_geometry_shader)
    glFramebufferTextureOES = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREOESPROC>(gles2wLoad("glFramebufferTextureOES"));
#endif /* defined(GL_OES_geometry_shader) */

#if defined(GL_OES_get_program_binary)
    glGetProgramBinaryOES = reinterpret_cast<PFNGLGETPROGRAMBINARYOESPROC>(gles2wLoad("glGetProgramBinaryOES"));
    glProgramBinaryOES    = reinterpret_cast<PFNGLPROGRAMBINARYOESPROC>(gles2wLoad("glProgramBinaryOES"));
#endif /* defined(GL_OES_get_program_binary) */

#if defined(GL_OES_mapbuffer)
    glMapBufferOES         = reinterpret_cast<PFNGLMAPBUFFEROESPROC>(gles2wLoad("glMapBufferOES"));
    glUnmapBufferOES       = reinterpret_cast<PFNGLUNMAPBUFFEROESPROC>(gles2wLoad("glUnmapBufferOES"));
    glGetBufferPointervOES = reinterpret_cast<PFNGLGETBUFFERPOINTERVOESPROC>(gles2wLoad("glGetBufferPointervOES"));
#endif /* defined(GL_OES_mapbuffer) */

#if defined(GL_OES_primitive_bounding_box)
    glPrimitiveBoundingBoxOES = reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXOESPROC>(gles2wLoad("glPrimitiveBoundingBoxOES"));
#endif /* defined(GL_OES_primitive_bounding_box) */

#if defined(GL_OES_sample_shading)
    glMinSampleShadingOES = reinterpret_cast<PFNGLMINSAMPLESHADINGOESPROC>(gles2wLoad("glMinSampleShadingOES"));
#endif /* defined(GL_OES_sample_shading) */

#if defined(GL_OES_tessellation_shader)
    glPatchParameteriOES = reinterpret_cast<PFNGLPATCHPARAMETERIOESPROC>(gles2wLoad("glPatchParameteriOES"));
#endif /* defined(GL_OES_tessellation_shader) */

#if defined(GL_OES_texture_3D)
    glTexImage3DOES              = reinterpret_cast<PFNGLTEXIMAGE3DOESPROC>(gles2wLoad("glTexImage3DOES"));
    glTexSubImage3DOES           = reinterpret_cast<PFNGLTEXSUBIMAGE3DOESPROC>(gles2wLoad("glTexSubImage3DOES"));
    glCopyTexSubImage3DOES       = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DOESPROC>(gles2wLoad("glCopyTexSubImage3DOES"));
    glCompressedTexImage3DOES    = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DOESPROC>(gles2wLoad("glCompressedTexImage3DOES"));
    glCompressedTexSubImage3DOES = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC>(gles2wLoad("glCompressedTexSubImage3DOES"));
    glFramebufferTexture3DOES    = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DOESPROC>(gles2wLoad("glFramebufferTexture3DOES"));
#endif /* defined(GL_OES_texture_3D) */

#if defined(GL_OES_texture_border_clamp)
    glTexParameterIivOES         = reinterpret_cast<PFNGLTEXPARAMETERIIVOESPROC>(gles2wLoad("glTexParameterIivOES"));
    glTexParameterIuivOES        = reinterpret_cast<PFNGLTEXPARAMETERIUIVOESPROC>(gles2wLoad("glTexParameterIuivOES"));
    glGetTexParameterIivOES      = reinterpret_cast<PFNGLGETTEXPARAMETERIIVOESPROC>(gles2wLoad("glGetTexParameterIivOES"));
    glGetTexParameterIuivOES     = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVOESPROC>(gles2wLoad("glGetTexParameterIuivOES"));
    glSamplerParameterIivOES     = reinterpret_cast<PFNGLSAMPLERPARAMETERIIVOESPROC>(gles2wLoad("glSamplerParameterIivOES"));
    glSamplerParameterIuivOES    = reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVOESPROC>(gles2wLoad("glSamplerParameterIuivOES"));
    glGetSamplerParameterIivOES  = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVOESPROC>(gles2wLoad("glGetSamplerParameterIivOES"));
    glGetSamplerParameterIuivOES = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVOESPROC>(gles2wLoad("glGetSamplerParameterIuivOES"));
#endif /* defined(GL_OES_texture_border_clamp) */

#if defined(GL_OES_texture_buffer)
    glTexBufferOES      = reinterpret_cast<PFNGLTEXBUFFEROESPROC>(gles2wLoad("glTexBufferOES"));
    glTexBufferRangeOES = reinterpret_cast<PFNGLTEXBUFFERRANGEOESPROC>(gles2wLoad("glTexBufferRangeOES"));
#endif /* defined(GL_OES_texture_buffer) */

#if defined(GL_OES_texture_storage_multisample_2d_array)
    glTexStorage3DMultisampleOES = reinterpret_cast<PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC>(gles2wLoad("glTexStorage3DMultisampleOES"));
#endif /* defined(GL_OES_texture_storage_multisample_2d_array) */

#if defined(GL_OES_texture_view)
    glTextureViewOES = reinterpret_cast<PFNGLTEXTUREVIEWOESPROC>(gles2wLoad("glTextureViewOES"));
#endif /* defined(GL_OES_texture_view) */

#if defined(GL_OES_vertex_array_object)
    glBindVertexArrayOES    = reinterpret_cast<PFNGLBINDVERTEXARRAYOESPROC>(gles2wLoad("glBindVertexArrayOES"));
    glDeleteVertexArraysOES = reinterpret_cast<PFNGLDELETEVERTEXARRAYSOESPROC>(gles2wLoad("glDeleteVertexArraysOES"));
    glGenVertexArraysOES    = reinterpret_cast<PFNGLGENVERTEXARRAYSOESPROC>(gles2wLoad("glGenVertexArraysOES"));
    glIsVertexArrayOES      = reinterpret_cast<PFNGLISVERTEXARRAYOESPROC>(gles2wLoad("glIsVertexArrayOES"));
#endif /* defined(GL_OES_vertex_array_object) */

#if defined(GL_OES_viewport_array)
    glViewportArrayvOES     = reinterpret_cast<PFNGLVIEWPORTARRAYVOESPROC>(gles2wLoad("glViewportArrayvOES"));
    glViewportIndexedfOES   = reinterpret_cast<PFNGLVIEWPORTINDEXEDFOESPROC>(gles2wLoad("glViewportIndexedfOES"));
    glViewportIndexedfvOES  = reinterpret_cast<PFNGLVIEWPORTINDEXEDFVOESPROC>(gles2wLoad("glViewportIndexedfvOES"));
    glScissorArrayvOES      = reinterpret_cast<PFNGLSCISSORARRAYVOESPROC>(gles2wLoad("glScissorArrayvOES"));
    glScissorIndexedOES     = reinterpret_cast<PFNGLSCISSORINDEXEDOESPROC>(gles2wLoad("glScissorIndexedOES"));
    glScissorIndexedvOES    = reinterpret_cast<PFNGLSCISSORINDEXEDVOESPROC>(gles2wLoad("glScissorIndexedvOES"));
    glDepthRangeArrayfvOES  = reinterpret_cast<PFNGLDEPTHRANGEARRAYFVOESPROC>(gles2wLoad("glDepthRangeArrayfvOES"));
    glDepthRangeIndexedfOES = reinterpret_cast<PFNGLDEPTHRANGEINDEXEDFOESPROC>(gles2wLoad("glDepthRangeIndexedfOES"));
    glGetFloati_vOES        = reinterpret_cast<PFNGLGETFLOATI_VOESPROC>(gles2wLoad("glGetFloati_vOES"));
#endif /* defined(GL_OES_viewport_array) */

#if defined(GL_OVR_multiview)
    glFramebufferTextureMultiviewOVR = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC>(gles2wLoad("glFramebufferTextureMultiviewOVR"));
#endif /* defined(GL_OVR_multiview) */

#if defined(GL_OVR_multiview_multisampled_render_to_texture)
    glFramebufferTextureMultisampleMultiviewOVR = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC>(gles2wLoad("glFramebufferTextureMultisampleMultiviewOVR"));
#endif /* defined(GL_OVR_multiview_multisampled_render_to_texture) */

#if defined(GL_QCOM_alpha_test)
    glAlphaFuncQCOM = reinterpret_cast<PFNGLALPHAFUNCQCOMPROC>(gles2wLoad("glAlphaFuncQCOM"));
#endif /* defined(GL_QCOM_alpha_test) */

#if defined(GL_QCOM_driver_control)
    glGetDriverControlsQCOM      = reinterpret_cast<PFNGLGETDRIVERCONTROLSQCOMPROC>(gles2wLoad("glGetDriverControlsQCOM"));
    glGetDriverControlStringQCOM = reinterpret_cast<PFNGLGETDRIVERCONTROLSTRINGQCOMPROC>(gles2wLoad("glGetDriverControlStringQCOM"));
    glEnableDriverControlQCOM    = reinterpret_cast<PFNGLENABLEDRIVERCONTROLQCOMPROC>(gles2wLoad("glEnableDriverControlQCOM"));
    glDisableDriverControlQCOM   = reinterpret_cast<PFNGLDISABLEDRIVERCONTROLQCOMPROC>(gles2wLoad("glDisableDriverControlQCOM"));
#endif /* defined(GL_QCOM_driver_control) */

#if defined(GL_QCOM_extended_get)
    glExtGetTexturesQCOM             = reinterpret_cast<PFNGLEXTGETTEXTURESQCOMPROC>(gles2wLoad("glExtGetTexturesQCOM"));
    glExtGetBuffersQCOM              = reinterpret_cast<PFNGLEXTGETBUFFERSQCOMPROC>(gles2wLoad("glExtGetBuffersQCOM"));
    glExtGetRenderbuffersQCOM        = reinterpret_cast<PFNGLEXTGETRENDERBUFFERSQCOMPROC>(gles2wLoad("glExtGetRenderbuffersQCOM"));
    glExtGetFramebuffersQCOM         = reinterpret_cast<PFNGLEXTGETFRAMEBUFFERSQCOMPROC>(gles2wLoad("glExtGetFramebuffersQCOM"));
    glExtGetTexLevelParameterivQCOM  = reinterpret_cast<PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC>(gles2wLoad("glExtGetTexLevelParameterivQCOM"));
    glExtTexObjectStateOverrideiQCOM = reinterpret_cast<PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC>(gles2wLoad("glExtTexObjectStateOverrideiQCOM"));
    glExtGetTexSubImageQCOM          = reinterpret_cast<PFNGLEXTGETTEXSUBIMAGEQCOMPROC>(gles2wLoad("glExtGetTexSubImageQCOM"));
    glExtGetBufferPointervQCOM       = reinterpret_cast<PFNGLEXTGETBUFFERPOINTERVQCOMPROC>(gles2wLoad("glExtGetBufferPointervQCOM"));
#endif /* defined(GL_QCOM_extended_get) */

#if defined(GL_QCOM_extended_get2)
    glExtGetShadersQCOM             = reinterpret_cast<PFNGLEXTGETSHADERSQCOMPROC>(gles2wLoad("glExtGetShadersQCOM"));
    glExtGetProgramsQCOM            = reinterpret_cast<PFNGLEXTGETPROGRAMSQCOMPROC>(gles2wLoad("glExtGetProgramsQCOM"));
    glExtIsProgramBinaryQCOM        = reinterpret_cast<PFNGLEXTISPROGRAMBINARYQCOMPROC>(gles2wLoad("glExtIsProgramBinaryQCOM"));
    glExtGetProgramBinarySourceQCOM = reinterpret_cast<PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC>(gles2wLoad("glExtGetProgramBinarySourceQCOM"));
#endif /* defined(GL_QCOM_extended_get2) */

#if defined(GL_QCOM_framebuffer_foveated)
    glFramebufferFoveationConfigQCOM     = reinterpret_cast<PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC>(gles2wLoad("glFramebufferFoveationConfigQCOM"));
    glFramebufferFoveationParametersQCOM = reinterpret_cast<PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC>(gles2wLoad("glFramebufferFoveationParametersQCOM"));
#endif /* defined(GL_QCOM_framebuffer_foveated) */

#if defined(GL_QCOM_motion_estimation)
    glTexEstimateMotionQCOM        = reinterpret_cast<PFNGLTEXESTIMATEMOTIONQCOMPROC>(gles2wLoad("glTexEstimateMotionQCOM"));
    glTexEstimateMotionRegionsQCOM = reinterpret_cast<PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC>(gles2wLoad("glTexEstimateMotionRegionsQCOM"));
#endif /* defined(GL_QCOM_motion_estimation) */

#if defined(GL_QCOM_frame_extrapolation)
    glExtrapolateTex2DQCOM = reinterpret_cast<PFNGLEXTRAPOLATETEX2DQCOMPROC>(gles2wLoad("glExtrapolateTex2DQCOM"));
#endif /* defined(GL_QCOM_frame_extrapolation) */

#if defined(GL_QCOM_texture_foveated)
    glTextureFoveationParametersQCOM = reinterpret_cast<PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC>(gles2wLoad("glTextureFoveationParametersQCOM"));
#endif /* defined(GL_QCOM_texture_foveated) */

#if defined(GL_QCOM_shader_framebuffer_fetch_noncoherent)
    glFramebufferFetchBarrierQCOM = reinterpret_cast<PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC>(gles2wLoad("glFramebufferFetchBarrierQCOM"));
#endif /* defined(GL_QCOM_shader_framebuffer_fetch_noncoherent) */

#if defined(GL_QCOM_shading_rate)
    glShadingRateQCOM = reinterpret_cast<PFNGLSHADINGRATEQCOMPROC>(gles2wLoad("glShadingRateQCOM"));
#endif /* defined(GL_QCOM_shading_rate) */

#if defined(GL_QCOM_tiled_rendering)
    glStartTilingQCOM = reinterpret_cast<PFNGLSTARTTILINGQCOMPROC>(gles2wLoad("glStartTilingQCOM"));
    glEndTilingQCOM   = reinterpret_cast<PFNGLENDTILINGQCOMPROC>(gles2wLoad("glEndTilingQCOM"));
#endif /* defined(GL_QCOM_tiled_rendering) */

    /* GLES2W_GENERATE_GLES_LOAD */

    /**
     * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
     * The above section is auto-generated from GLES spec by running:
     * node tools/gles-wrangler-generator/generate.js
     * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
     */
}
