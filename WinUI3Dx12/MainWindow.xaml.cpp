// MainWindow.xaml.cpp
#include "pch.h"
#include "MainWindow.xaml.h"
#include "DirectX12Renderer.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::WinUI3Dx12::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        // 获取 SwapChainPanel
        auto panel = this->Content().as<Grid>().Children().GetAt(0).as<SwapChainPanel>();

        // 创建并初始化 DX12 渲染器
        m_renderer = std::make_unique<DirectX12Renderer>();
        m_renderer->Initialize(panel);
    }

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        // 示例按钮点击（可选）
    }
}