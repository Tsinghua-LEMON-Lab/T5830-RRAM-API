#************************************************************************
#NOTICE: PLEASE READ CAREFULLY: ADVANTEST PROVIDES THIS SOFTWARE TO YOU
#ONLY UPON YOUR ACCEPTANCE OF ADVANTEST'S TERMS OF USE. THE SOFTWARE IS
#PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND AND ADVANTEST'S LIABILITY
#FOR SUCH SOFTWARE LIMITED TO THE FULLEST EXTENT PERMITTED UNDER THE LAW.
#************************************************************************

PRO			= pro_SPINOR.exe
PAT			= pat_SPINOR.mpa
LIBS                    = 
OBJS                    = pro_SPINOR.o
CC                      = ${ATFSSITECC}
LD                      = ${ATFSSITECC}
TRANS                   = trans
CPPFLAGS                = -I${ATFSSYSTEM}/${ATFSATL}/include \
                          -I${ATFSSYSTEM}/${ATFSSYS}/include \
                          -I${ATFSSYSTEM}/${ATFSVTC}/include \
                          -I${ATFSSYSTEM}/${ATFSTBUS}/include
CFLAGS                  = -Wall -fpic
ATFS_CFLAGS             = -O2
LDFLAGS                 = -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSDIAG}/lib              \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSATL}/lib               \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSSYS}/lib               \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSTBUS}/lib              \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSSYS}/${ATFSTMODEL}/lib \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSSYS}/${ATFSBMODEL}/lib \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSVTC}/${ATFSTMODEL}/lib \
                          -L${ATFSROOT}/${ATFSSITEARCH}/${ATFSOS}/${ATFSDIAG}/${ATFSTMODEL}/lib
LDLIBS                  = -latfssock                                   \
                          -latfsmcicl                                  \
                          -latfsvtc                                    \
                          -latfstb                                     \
                          -latfsrc                                     \
                          -latfssc                                     \
                          -latfshn                                     \
                          -lrt                                         \
                          -ldl                                         \
                          -lm
TARGET                  = ${PRO} ${PAT}
DFILES                  = ${OBJS:.o=.d}
all:			${TARGET}
clean:			
			@${RM} *.o *.mpa *.exe
%.exe:%.o
			${LD} $< -o $@ ${ATFS_CFLAGS} ${LDFLAGS} ${LDLIBS}
%.d:%.c
			${CC} $(CPPFLAGS) -MM $< > $@
%.mpa:%.asc
			${TRANS} $<
-include        ${DFILES}
