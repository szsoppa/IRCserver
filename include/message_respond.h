/* 
 * File:   MessageRespond.h
 * Author: szymon
 *
 * Created on 11 stycznia 2015, 22:16
 */

#ifndef MESSAGERESPOND_H
#define	MESSAGERESPOND_H

enum Message_respond
{
    OK = 0,
    DENY = 1,
    NICK_TAKEN = 2,
    WRONG_SIGN_IN_DATA = 3,
    WRONG_SIGN_UP_DATA = 4
};

#endif	/* MESSAGERESPOND_H */

