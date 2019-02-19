au Filetype python setlocal expandtab
au Filetype c setlocal noexpandtab

colorscheme badwolf
set autoindent
set number
set showcmd
set showmatch
set wildmenu
set incsearch
set hlsearch
set paste
set nopaste
set pastetoggle=<f12>
set autoindent smartindent
set nowrap
set textwidth=80
set softtabstop=4
set tabstop=4
set shiftwidth=4
set shiftround
set smartcase


"Remapping
:nnoremap K kk
:nnoremap J jj
:nnoremap <leader><space> :nohlsearch<CR>
:nnoremap f ^
:nnoremap j gj
:nnoremap k gk
:nnoremap F $
:nnoremap L W
:inoremap JK <esc>
:inoremap jk <esc>
:inoremap Jk <esc>

" highlight char at column 81 (textwidth + 1)
hi link OverLength Error
autocmd BufEnter * match OverLength /\%81v/

"allows plugins
syntax enable

" --- Strips trailing whitespace ---
function! StripWhitespace ()
	let save_cursor = getpos(".")
	let old_query = getreg('/')
	:%s/\s\+$//e
	call setpos('.', save_cursor)
	call setreg('/', old_query)
endfunction

" Trailing white space (strip spaces)
:noremap <leader>ss :call StripWhitespace()<CR>

" --- Vim Plug Start ___ 
call plug#begin()

call plug#end()
