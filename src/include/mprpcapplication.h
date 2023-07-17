#pragma once

#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

// mprpc框架的基础类，负责框架的一些初始化操作
class MprpcApplication
{
public:
    void Init(int argc, char **argv);
    static MprpcApplication& GetInstance();
    MprpcConfig& GetConfig();
private:
    MprpcConfig m_config;

    MprpcApplication() {}
    MprpcApplication(const MprpcApplication&) = delete;
    MprpcApplication(MprpcApplication&&) = delete;
};