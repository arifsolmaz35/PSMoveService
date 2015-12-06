//-- includes -----
#include "App.h"
#include "AppStage_MainMenu.h"
#include "AppStage_SelectController.h"

#ifdef _WIN32
#pragma comment (lib, "winmm.lib")     /* link with Windows MultiMedia lib */
#pragma comment (lib, "opengl32.lib")  /* link with Microsoft OpenGL lib */
#pragma comment (lib, "glu32.lib")     /* link with OpenGL Utility lib */

#pragma warning (disable:4244)	/* Disable bogus conversion warnings. */
#pragma warning (disable:4305)  /* VC++ 5.0 version of above warning. */
#endif

//-- entry point -----
extern "C" int main(int argc, char *argv[])
{
    App app;

    // Register all of the app stages
    app.registerAppStage<AppStage_MainMenu>();
    app.registerAppStage<AppStage_SelectController>();

    return app.exec(argc, argv, AppStage_MainMenu::APP_STAGE_NAME);
}
