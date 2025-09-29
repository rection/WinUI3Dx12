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

        // ��ȡ SwapChainPanel
        auto panel = this->Content().as<Grid>().Children().GetAt(0).as<SwapChainPanel>();

        // ��������ʼ�� DX12 ��Ⱦ��
        m_renderer = std::make_unique<DirectX12Renderer>();
        m_renderer->Initialize(panel);
    }

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        // ʾ����ť�������ѡ��
    }
}