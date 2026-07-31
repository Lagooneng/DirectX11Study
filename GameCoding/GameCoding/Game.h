#pragma once
class Game
{
public:
	Game();
	~Game();

public:
	void Init(HWND hwnd);
	void Update();
	void Render();

private:
	void RenderBegin();
	void RenderEnd();

private:
	void CreateDeviceAndSwapChain();
	void CreateRenterTargetView();
	void SetViewPort();

private:
	HWND _hwnd;
	uint32 _width = 0;
	uint32 _height = 0;

private:
	// Device, SwapChain
	ComPtr< ID3D11Device > _device;
	ComPtr< ID3D11DeviceContext > _deviceContext;
	ComPtr< IDXGISwapChain > _swapChain;

	// RTV
	ComPtr<ID3D11RenderTargetView> _renderTargetView;

	// Misc
	D3D11_VIEWPORT _viewport{ 0 };
	float _clearColor[4] = { 0.5f, 0.5f, 0.5f, 0.5f };
};

