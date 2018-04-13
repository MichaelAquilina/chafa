/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/* Copyright (C) 2018 Hans Petter Jansson
 *
 * This file is part of Chafa, a program that turns images into character art.
 *
 * Chafa is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Chafa is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Chafa.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef __CHAFA_FEATURES_H__
#define __CHAFA_FEATURES_H__

#if !defined (__CHAFA_H_INSIDE__) && !defined (CHAFA_COMPILATION)
# error "Only <chafa.h> can be included directly."
#endif

G_BEGIN_DECLS

/* Features */

typedef enum
{
    CHAFA_FEATURE_MMX          = (1 << 0),
    CHAFA_FEATURE_SSE41        = (1 << 1)
}
ChafaFeatures;

CHAFA_AVAILABLE_IN_ALL
ChafaFeatures chafa_get_builtin_features (void);
CHAFA_AVAILABLE_IN_ALL
ChafaFeatures chafa_get_supported_features (void);
CHAFA_AVAILABLE_IN_ALL
gchar *chafa_describe_features (ChafaFeatures features);

G_END_DECLS

#endif /* __CHAFA_FEATURES_H__ */