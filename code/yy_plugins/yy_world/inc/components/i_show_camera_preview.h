/************************************************************************/
/* 
@author:    junliang
@brief:     ��ʾcamera preview��obj
@time:      11/28/2016
*/
/************************************************************************/
#pragma once

#include "yy_core.h"
#include "i_comp_mesh_render.h"
#include <string>

class IShowCameraPreview : public Component
{
public:
    virtual void Load(const std::string& model_name, const std::string& model_path) = 0;
};