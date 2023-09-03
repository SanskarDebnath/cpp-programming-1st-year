#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <drm/drm_mode.h>

int main(int argc, char *argv[]) {
  // Get the DRM device.
  drm_device_t *dev = drm_open_primary(NULL);
  if (!dev) {
    fprintf(stderr, "Error opening DRM device\n");
    return 1;
  }

  // Get the driver name.
  char *driver_name = drm_get_driver_name(dev);
  printf("Driver name: %s\n", driver_name);

  // Get the driver version.
  char *driver_version = drm_get_driver_version(dev);
  printf("Driver version: %s\n", driver_version);

  // Free the driver name and version strings.
  free(driver_name);
  free(driver_version);

  // Close the DRM device.
  drm_close(dev);

  return 0;
}

