#include <vector>

#include "../framebuffer/framebuffer.hpp"
#include "paint.hpp"
#include "renderer.hpp"

void draw(FrameBuffer *framebuffer, Paint* paint) {
    while (paint->stillRunning()) {
        if (!paint->isTextMode()) {
            framebuffer->clearScreen();
            paint->draw(framebuffer);
            framebuffer->draw();
        }
        usleep(10000);
    }
}
