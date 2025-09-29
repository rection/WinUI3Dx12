#pragma once

#include "MainWindow.g.h"

namespace winrt::WinUI3Dx12::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

    };
}

namespace winrt::WinUI3Dx12::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
