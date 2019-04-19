require 'mkmf-rice'

LIB_DIRS = [
  '/usr/local/lib',
]

have_library("mastodon-cpp") 
create_makefile('mstdn/mstdn')
