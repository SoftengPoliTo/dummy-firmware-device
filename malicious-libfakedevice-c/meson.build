project(
  'malicious-libfakedevice-c',
  'c',
  license: 'MIT',
  meson_version: '>= 0.53.0',
  default_options: ['c_std=gnu11', 'warning_level=1'],
  version: '0.1.0'
)

c = meson.get_compiler('c')

flags = [
  '-pedantic',
]

include_directories('include')

sources = [
  'src/device.c',
  'src/feature.c',
  'src/fake-firmware.c',
]

libcurl_dep = dependency('libcurl', fallback: ['libcurl'], static: true)

fake_firmware = executable (
  'malicious-fake-firmware-c',
  sources,
  dependencies: [libcurl_dep],
  install: true,
  link_args: flags
)
