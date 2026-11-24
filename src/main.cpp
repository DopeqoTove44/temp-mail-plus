// main.cpp — entry point. Wires config and subsystems together.

#include "tempmailplus/settings.h"
#include "tempmailplus/mailbox.h"
#include "tempmailplus/api.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    tempmailplus::Settings settings = tempmailplus::Settings::load_default();
    tempmailplus::Mailbox mailbox(settings.store_path);
    tempmailplus::Api api(settings.store_path);
    std::fprintf(stderr, "[temp-mail-plus] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
