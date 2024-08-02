#pragma once

#define SDWND_EXCEPT( hr ) Window::HrException( __LINE__,__FILE__,(hr) )
#define SDWND_LAST_EXCEPT() Window::HrException( __LINE__,__FILE__,GetLastError() )
#define SDWND_NOGFX_EXCEPT() Window::NoGfxException( __LINE__,__FILE__ )