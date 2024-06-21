if has("syntax")
	syntax on
endif

set hlsearch
set nu
set autoindent
set ts=4
set sts=4
set cindent
set laststatus=2
set shiftwidth=4
set showmatch
set smartcase
set smarttab
set smartindent
set ruler
set fileencodings=utf8,euc-kr 
set tags=./tags,tags
set guifont=DejaVu\ Sans\ Mono\ 14
set encoding=utf-8
set fileencoding=utf-8
set mouse=



colorscheme desert
au BufNewFile,BufRead *.sv,*.svh so ~/.vim/verilog_systemverilog/syntax/verilog_systemverilog.vim
