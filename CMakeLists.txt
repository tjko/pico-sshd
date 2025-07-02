add_library(pico-sshd-lib INTERFACE)
target_include_directories(pico-sshd-lib INTERFACE ${CMAKE_CURRENT_LIST_DIR}/include)
target_link_libraries(pico-sshd-lib INTERFACE pico_rand wolfssl wolfssh)
target_sources(pico-telnetd-lib INTERFACE
  ${CMAKE_CURRENT_LIST_DIR}/src/server.c
  ${CMAKE_CURRENT_LIST_DIR}/src/ringbuffer.c
  ${CMAKE_CURRENT_LIST_DIR}/src/sha512crypt.c
  )

