ifeq ($(WPA_SUPPLICANT_VERSION),MESH)
    include $(call all-subdir-makefiles)
endif
