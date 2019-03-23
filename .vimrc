set nocompatible
set nocompatible            " Disable vi compatibility

filetype on                 " filetype must be 'on' before setting it 'off'
                            "   otherwise it exits with a bad status and breaks
                            "   git commit.
filetype off                " force reloading *after* pathogen loaded

"set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim

call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'easymotion/vim-easymotion' "usa: t/s/w/j/k
Plugin 'tpope/vim-repeat' "Allows reptition of plugins
Plugin 'tpope/vim-surround' "edits surrounds like () with cs/ds/yss/ysiw
Plugin 'tpope/vim-fugitive' "git editor on file
Plugin 'tpope/vim-unimpaired' "keymappings like [e for bubble
Plugin 'mileszs/ack.vim' "grep file open
Plugin 'vim-scripts/IndexedSearch' "shows the number of matches
Plugin 'junkblocker/patchreview-vim' "reviews changes in a cwd
Plugin 'scrooloose/syntastic' "linting
Plugin 'scrooloose/nerdcommenter' "cs/cc/cu/cspace
Plugin 'scrooloose/nerdtree' "opens your director for easy editing
Plugin 'wincent/command-t'


call vundle#end()

syntax on
filetype plugin indent on   " enable detection, plugins and indent

" Local dirs (centralize everything)
set backupdir=~/.vim/backups
set directory=~/.vim/swaps


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
:nnoremap L w
:inoremap JK <esc>
:inoremap jk <esc>
:inoremap Jk <esc>

" highlight char at column 81 (textwidth + 1)
hi link OverLength Error
autocmd BufEnter * match OverLength /\%81v/
" --- EasyMotion ---
let g:EasyMotion_leader_key = '<Leader>m'
" lets make <leader>F and <leader>f use easymotion by default
let g:EasyMotion_mapping_f = '<leader>f'
let g:EasyMotion_mapping_F = '<leader>F'
" Remapping for easymotion
nmap s <Plug>(easymotion-s2)
nmap t <Plug>(easymotion-t2)

"search replace in easymotion
map  / <Plug>(easymotion-sn)
omap / <Plug>(easymotion-tn)
map  n <Plug>(easymotion-next)
map  N <Plug>(easymotion-prev)

" Gif config
map <Leader>l <Plug>(easymotion-lineforward)
map <Leader>j <Plug>(easymotion-j)
map <Leader>k <Plug>(easymotion-k)
map <Leader>h <Plug>(easymotion-linebackward)

let g:EasyMotion_startofline = 0 " keep cursor column when 
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
